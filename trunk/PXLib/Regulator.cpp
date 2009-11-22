#include "Regulator.h"
#include "Timer.h"




//-------------------------------Constructor--------------------------------------------------
//
//
//--------------------------------------------------------------------------------------------
Regulator::Regulator(double NumUpdatesPerSecondRqd,Timer* clock)
    {
        m_Timer=clock;
        if (NumUpdatesPerSecondRqd > 0)
        {
            m_dUpdatePeriod = 1000.0 / NumUpdatesPerSecondRqd; //in ticks
        }

        else if (0.0==NumUpdatesPerSecondRqd)
        {
            m_dUpdatePeriod = 0.0;
        }

        else if (NumUpdatesPerSecondRqd < 0)
        {
            m_dUpdatePeriod = -1;
        }

         m_dwNextUpdateTime = (int)(m_Timer->GetTicks() + m_dUpdatePeriod);
    }


//-------------------------------IsReady--------------------------------------------------
//
//returns true if the current time exceeds m_dwNextUpdateTime
//--------------------------------------------------------------------------------------------
bool Regulator::IsReady()
{
    //if a regulator is instantiated with a zero freq then it goes into
    //stealth mode (doesn't regulate)
    if (0.0==m_dUpdatePeriod) return true;

    //if the regulator is instantiated with a negative freq then it will
    //never allow the code to flow
    if (m_dUpdatePeriod < 0) return false;

    int CurrentTime = m_Timer->GetTicks();

    //the number of milliseconds the update period can vary per required
    //update-step. This is here to make sure any multiple clients of this class
    //have their updates spread evenly
   // static const double UpdatePeriodVariator = 10.0;

    if (CurrentTime >= m_dwNextUpdateTime)
    {
        m_dwNextUpdateTime = (int)(CurrentTime + m_dUpdatePeriod );

        return true;
    }

    return false;
}

void Regulator::ChangeUpdatePeriod(double NewUpdatePeriod)
{
    if (NewUpdatePeriod > 0)
    {
        m_dUpdatePeriod = 1000.0 / NewUpdatePeriod; //in ticks
    }

    else if (0.0==NewUpdatePeriod)
    {
        m_dUpdatePeriod = 0.0;
    }

    else if (NewUpdatePeriod < 0)
    {
        m_dUpdatePeriod = -1;
    }

    m_dwNextUpdateTime = (int)(m_Timer->GetTicks() + m_dUpdatePeriod);
}
