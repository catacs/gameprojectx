#ifndef REGULATOR_H
#define REGULATOR_H

/** --------------------------------------------------------------------------------
--------------------------------------------------------------------------------
* @name : Regulator
* @author : CyanCrey
* @date : 14,2,2008
* @Description:
The Regulator makes use of the Timer to control the Update Period of some part of
code. It returns true only when the period was elapsed. It's like an alarm that is allways 
ringing at the same frecuency of time.

Each Regulator is associate whith a concrete timer and makes it's comprobations whith 
it's ticks.
--------------------------------------------------------------------------------
-------------------------------------------------------------------------------- **/
class Timer;

class Regulator
{
    private:

        //the time period between updates in ticks
		double m_dUpdatePeriod;

        //the next time the regulator allows code flow
		int m_dwNextUpdateTime;

        Timer    *m_Timer;

    public:

		/** --------------------------------------------------------------------------------

		* @name : Regulator
		* @author : CyanCrey
		* @date : 14,2,2008
		* @param : NumUpdatesPerSecondRqd, i think it's very descriptive... the Number of Updates Per Second Requested
		* @param : clock, The Timer which is asociate the Regulator.		
		* @return : void
		* @Description:
		   Asociate the regulator whith the timer "clock", convert the update period to ticks and calculate the next update period 

		-------------------------------------------------------------------------------- **/
        Regulator(double NumUpdatesPerSecondRqd,Timer* clock);

		/** --------------------------------------------------------------------------------

		* @name : IsReady
		* @author : CyanCrey
		* @date : 14,2,2008
		* @param : void	
		* @return : TRUE if it's the time in tickets marked by the nextupdateTime
		* @return : FALSE if itsn't the time in tickets marked by the nextupdateTime
		* @Description:
		   Returns the apropieta value and calculate the nextupdateTime in ticks 

		-------------------------------------------------------------------------------- **/
		bool IsReady();

		/** --------------------------------------------------------------------------------

		* @name : ChangeUpdatePeriod
		* @author : CyanCrey
		* @date : 14,2,2008
		* @param : NewUpdatePeriod -> the new update period that you want	
		* @return : void
		* @Description:
		   Stablish a new Update Period for this regulator

		-------------------------------------------------------------------------------- **/
        void ChangeUpdatePeriod(double NewUpdatePeriod);
};

#endif
