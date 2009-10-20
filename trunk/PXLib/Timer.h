#ifndef TIMER_H
#define TIMER_H

/** --------------------------------------------------------------------------------
--------------------------------------------------------------------------------
* @name : Timer
* @author : CyanCrey
* @date : 14,2,2008
* @Description:
The Timer encapsulates the SDL function to Get the system's time in ticks
and contains all the necessary logic to support Pause, Unpause the timer.

Each timer is completly independent and the ticks are only used for mesure the elapsed time.

--------------------------------------------------------------------------------
-------------------------------------------------------------------------------- **/

class Timer
{
    private:

        //The clock time when the timer started
        int m_iStartTicks;

        //The ticks stored when the timer was paused
        int m_iPausedTicks;

        //The timer status
        bool m_bPaused;
        bool m_bStarted;

    public:

		/** --------------------------------------------------------------------------------

		* @name : Timer
		* @author : CyanCrey
		* @date : 14,2,2008
		* @param : void
		* @return : void
		* @Description:
		   Initialize all the class variables to the default values. 

		-------------------------------------------------------------------------------- **/
        Timer();

		/** --------------------------------------------------------------------------------

		* @name : Start
		* @author : CyanCrey
		* @date : 14,2,2008
		* @param : void
		* @return : void
		* @Description:
		Gets the actual system's ticks and store it.

		-------------------------------------------------------------------------------- **/
        void Start();

		/** --------------------------------------------------------------------------------

		* @name : Stop
		* @author : CyanCrey
		* @date : 14,2,2008
		* @param : void
		* @return : void
		* @Description: Puts up the Stopped's Flag

		-------------------------------------------------------------------------------- **/
        void Stop();

		/** --------------------------------------------------------------------------------

		* @name : Pause
		* @author : CyanCrey
		* @date : 14,2,2008
		* @param : void
		* @return : void
		* @Description: Put up the Paused's Flag and store the time the timer is paused

		-------------------------------------------------------------------------------- **/
        void Pause();

		/** --------------------------------------------------------------------------------

		* @name : Unpause
		* @author : CyanCrey
		* @date : 14,2,2008
		* @param : void
		* @return : void
		* @Description: Put down the Paused's flag and restore the time the timer was paused

		-------------------------------------------------------------------------------- **/
        void Unpause();

        /** --------------------------------------------------------------------------------

		* @name : GetTicks
		* @author : CyanCrey
		* @date : 14,2,2008
		* @param : void
		* @return : The system time in ticks
		* @Description: Gets the ticks since the Timer was start.

		-------------------------------------------------------------------------------- **/
        int GetTicks();

        //Checks the status of the timer
       bool IsStarted(){ return m_bStarted; }
       bool IsPaused(){ return m_bPaused; }
};

#endif
