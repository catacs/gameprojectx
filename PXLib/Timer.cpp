#include "Timer.h"

#include "SDL.h"



Timer::Timer()
{
    //Initialize the variables
    m_iStartTicks = 0;
    m_iPausedTicks = 0;
    m_bPaused = false;
    m_bStarted = false;
}



void Timer::Start()
{
    //Start the timer
    m_bStarted = true;

    //Unpause the timer
    m_bPaused = false;

    //Get the current clock time
    m_iStartTicks = SDL_GetTicks();
}


void Timer::Stop()
{
    //Stop the timer
    m_bStarted = false;

    //Unpause the timer
    m_bPaused = false;
}



int Timer::GetTicks()
{
    //If the timer is running
    if( m_bStarted == true )
    {
        //If the timer is paused
        if( m_bPaused == true )
        {
            //Return the number of ticks when the timer was paused
            return m_iPausedTicks;
        }
        else
        {
            //Return the current time minus the start time
             return SDL_GetTicks() - m_iStartTicks;
        }
    }
    //If the timer isn't running
    return 0;
}



void Timer::Pause()
{
    //If the timer is running and isn't already paused
    if( ( m_bStarted == true ) && ( m_bPaused == false ) )
    {
        //Pause the timer
        m_bPaused = true;

        //Store when the timer is paused
        m_iPausedTicks = SDL_GetTicks() - m_iStartTicks;
    }
}


void Timer::Unpause()
{
    //If the timer is paused
    if( m_bPaused == true )
    {
        //Unpause the timer
        m_bPaused = false;

        //Reset the starting ticks to the ticks when the timer had been paused.
        m_iStartTicks = SDL_GetTicks() - m_iPausedTicks;

        //Reset the paused ticks
        m_iPausedTicks = 0;
    }
}