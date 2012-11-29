#include "cue_testfixture"
class CueTimeStamp : public CueTest{ };

/**
 * Tests the hours in start time of a cue
 *
 * From http://dev.w3.org/html5/webvtt/
 *
 */
TEST_F(CueTimeStamp, StartTimeHours)
{
	loadVtt("cue-timings/start-time.vtt", 1);
	ASSERT_EQ(0, errorCount()) <<"This file should contain no errors.";
	ASSERT_EQ(10, getCue(0).startTime().hours());
}

/**
 * Tests the minutes in the start time of a cue
 *
 * From http://dev.w3.org/html5/webvtt/
 *
 */
TEST_F(CueTimeStamp, StartTimeMinutes)
{
    loadVtt("cue-timings/start-time.vtt", 1);
    ASSERT_EQ(0, errorCount()) <<"This file should have no errors.";
    ASSERT_EQ(0, getCue(0).startTime().minutes());
}

/**
 * Tests the seconds in the start time of a cue
 *
 * From http://dev.w3.org/html5/webvtt/
 *
 */
TEST_F(CueTimeStamp, StartTimeSeconds)
{
    loadVtt("cue-timings/start-time.vtt", 1);
    ASSERT_EQ(0, errorCount()) <<"This file should have no errors.";
    ASSERT_EQ(11, getCue(0).startTime().seconds());
}

/**
 * Tests the second's fraction in the start time of a cue
 *
 * From http://dev.w3.org/html5/webvtt/
 *
 */
TEST_F(CueTimeStamp, StartTimeSecondsFraction)
{
    loadVtt("cue-timings/start-time.vtt", 1);
    ASSERT_EQ(0, errorCount()) <<"This file should have no errors.";
    ASSERT_EQ(123, getCue(0).startTime().milliseconds());
}

/**
 * Tests the hours in the end time of a cue
 *
 * From http://dev.w3.org/html5/webvtt/
 *
 */
TEST_F(CueTimeStamp, EndTimeHours)
{
    loadVtt("cue-timings/end-time.vtt", 1);
	ASSERT_EQ(0, errorCount()) <<"This file should contain no errors.";
	ASSERT_EQ(14, getCue(0).endTime().hours());
}

/**
 * Tests the minutes in the end time of a cue
 *
 * From http://dev.w3.org/html5/webvtt/
 *
 */
TEST_F(CueTimeStamp, EndTimeMinutes)
{
    loadVtt("cue-timings/end-time.vtt", 1);
	ASSERT_EQ(0, errorCount()) <<"This file should contain no errors.";
	ASSERT_EQ(15, getCue(0).endTime().minutes());
}


/**
 * Tests the seconds in the start time of a cue
 *
 * From http://dev.w3.org/html5/webvtt/
 *
 */
TEST_F(CueTimeStamp, EndTimeSeconds)
{
    loadVtt("cue-timings/end-time.vtt", 1);
	ASSERT_EQ(0, errorCount()) <<"This file should contain no errors.";
	ASSERT_EQ(16, getCue(0).endTime().seconds());
}

/**
 * Tests the milli seconds in the end time of a cue
 *
 * From http://dev.w3.org/html5/webvtt/
 *
 */
TEST_F(CueTimeStamp, EndTimeSecondsFraction)
{
    loadVtt("cue-timings/end-time.vtt", 1);
    ASSERT_EQ(0, errorCount()) <<"This filr should have no errors.";
    ASSERT_EQ(456, getCue(0).endTime().milliseconds());
}
