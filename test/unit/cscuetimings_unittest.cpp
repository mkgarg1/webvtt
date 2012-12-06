#include "cue_testfixture"
class CueTimeStamp : public CueTest{ };

/*
 Test expecting parser to succeed when a 4 component timestamp's 'hours' component
 consists of 2 digits at the high end of the valid range (99)
 
 From http://dev.w3.org/html5/webvtt/#webvtt-timestamp (10/15/2012):
 A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds,
 and thousandths of a second seconds-frac, consists of the following components,
 in the given order:
 1. Optionally (required if hour is non-zero):
 1. Two or more characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT
 NINE (9), representing the hours as a base ten integer.
 
 2. A U+003A COLON character (:)
 
 2. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9),
 representing the minutes as a base ten integer in the range 0 ≤ minutes ≤ 59.
 
 3. A U+003A COLON character (:)
 
 4. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 seconds as a base ten integer in the range 0 ≤ seconds ≤ 59.
 
 5. A U+002E FULL STOP character (.).
 
 6. Three characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 thousandths of a second seconds-frac as a base ten integer.
 */
TEST_F(CueTimeStamp, StartTimeStampHours2DigitsHigh)
{
	loadVtt( "cue-timings/timestamp_hours_2_digits_high_good.vtt", 1 );
	ASSERT_EQ(0, errorCount()) <<"This file should contain no errors.";
	ASSERT_EQ(99, getCue(0).startTime().hours());
}

TEST_F(CueTimeStamp, EndTimeStampHours2DigitsHigh)
{
	loadVtt( "cue-timings/timestamp_hours_2_digits_high_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
	ASSERT_EQ( 99, getCue(0).endTime().hours() );
}

/*
 Test expecting parser to succeed when a 4 component timestamp's 'hours' component
 consists of 2 digits at the low end of the valid range (00)
 
 From http://dev.w3.org/html5/webvtt/#webvtt-timestamp (10/15/2012):
 A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds,
 and thousandths of a second seconds-frac, consists of the following components,
 in the given order:
 1. Optionally (required if hour is non-zero):
 1. Two or more characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT
 NINE (9), representing the hours as a base ten integer.
 
 2. A U+003A COLON character (:)
 
 2. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9),
 representing the minutes as a base ten integer in the range 0 ≤ minutes ≤ 59.
 
 3. A U+003A COLON character (:)
 
 4. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 seconds as a base ten integer in the range 0 ≤ seconds ≤ 59.
 
 5. A U+002E FULL STOP character (.).
 
 6. Three characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 thousandths of a second seconds-frac as a base ten integer.
 */
TEST_F(CueTimeStamp, StartTimeStampHours2DigitsLow)
{
	loadVtt( "cue-timings/timestamp_hours_2_digits_low_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
	ASSERT_EQ( 00, getCue(0).startTime().hours() );
}

TEST_F(CueTimeStamp, EndTimeStampHours2DigitsLow)
{
	loadVtt( "cue-timings/timestamp_hours_2_digits_low_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
	ASSERT_EQ( 00, getCue(0).endTime().hours() );
}

/*
 Test expecting parser to succeed when a 4 component timestamp's 'hours' component
 consists of 2 digits at the middle of the valid range (54)
 
 From http://dev.w3.org/html5/webvtt/#webvtt-timestamp (10/15/2012):
 A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds,
 and thousandths of a second seconds-frac, consists of the following components,
 in the given order:
 1. Optionally (required if hour is non-zero):
 1. Two or more characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT
 NINE (9), representing the hours as a base ten integer.
 
 2. A U+003A COLON character (:)
 
 2. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9),
 representing the minutes as a base ten integer in the range 0 ≤ minutes ≤ 59.
 
 3. A U+003A COLON character (:)
 
 4. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 seconds as a base ten integer in the range 0 ≤ seconds ≤ 59.
 
 5. A U+002E FULL STOP character (.).
 
 6. Three characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 thousandths of a second seconds-frac as a base ten integer.
 */
TEST_F(CueTimeStamp, StartTimeStampHours2DigitsMiddle)
{
	loadVtt( "cue-timings/timestamp_hours_2_digits_mid_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
	ASSERT_EQ( 54, getCue(0).startTime().hours() );
}

TEST_F(CueTimeStamp, EndTimeStampHours2DigitsMiddle)
{
	loadVtt( "cue-timings/timestamp_hours_2_digits_mid_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
	ASSERT_EQ( 54, getCue(0).endTime().hours() );
}

/*
 Test expecting parser to succeed when a 4 component timestamp's 'hours' component
 consists of more than 2 digits at the high end of the valid range
 
 From http://dev.w3.org/html5/webvtt/#webvtt-timestamp (10/15/2012):
 A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds,
 and thousandths of a second seconds-frac, consists of the following components,
 in the given order:
 1. Optionally (required if hour is non-zero):
 1. Two or more characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT
 NINE (9), representing the hours as a base ten integer.
 
 2. A U+003A COLON character (:)
 
 2. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9),
 representing the minutes as a base ten integer in the range 0 ≤ minutes ≤ 59.
 
 3. A U+003A COLON character (:)
 
 4. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 seconds as a base ten integer in the range 0 ≤ seconds ≤ 59.
 
 5. A U+002E FULL STOP character (.).
 
 6. Three characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 thousandths of a second seconds-frac as a base ten integer.
 */
TEST_F(CueTimeStamp, StartTimeStampHoursNDigitsHigh)
{
	loadVtt( "cue-timings/timestamp_hours_n_digits_high_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
	ASSERT_EQ( 9999, getCue(0).startTime().hours() );
}

TEST_F(CueTimeStamp, EndTimeStampHoursNDigitsHigh)
{
	loadVtt( "cue-timings/timestamp_hours_n_digits_high_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
	ASSERT_EQ( 9999, getCue(0).endTime().hours() );
}

/*
 Test expecting parser to succeed when a 4 component timestamp's 'hours' component
 consists of more than 2 digits at the low end of the valid range
 
 From http://dev.w3.org/html5/webvtt/#webvtt-timestamp (10/15/2012):
 A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds,
 and thousandths of a second seconds-frac, consists of the following components,
 in the given order:
 1. Optionally (required if hour is non-zero):
 1. Two or more characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT
 NINE (9), representing the hours as a base ten integer.
 
 2. A U+003A COLON character (:)
 
 2. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9),
 representing the minutes as a base ten integer in the range 0 ≤ minutes ≤ 59.
 
 3. A U+003A COLON character (:)
 
 4. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 seconds as a base ten integer in the range 0 ≤ seconds ≤ 59.
 
 5. A U+002E FULL STOP character (.).
 
 6. Three characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 thousandths of a second seconds-frac as a base ten integer.
 */
TEST_F(CueTimeStamp, StartTimeStampHoursNDigitsLow)
{
	loadVtt( "cue-timings/timestamp_hours_n_digits_low_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
	ASSERT_EQ( 0000, getCue(0).startTime().hours() );
}

TEST_F(CueTimeStamp, EndTimeStampHoursNDigitsLow)
{
	loadVtt( "cue-timings/timestamp_hours_n_digits_low_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
	ASSERT_EQ( 0000, getCue(0).endTime().hours() );
}

/*
 Test expecting parser to succeed when a 4 component timestamp's 'hours' component
 consists of more than 2 digits at the middle of the valid range
 
 From http://dev.w3.org/html5/webvtt/#webvtt-timestamp (10/15/2012):
 A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds,
 and thousandths of a second seconds-frac, consists of the following components,
 in the given order:
 1. Optionally (required if hour is non-zero):
 1. Two or more characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT
 NINE (9), representing the hours as a base ten integer.
 
 2. A U+003A COLON character (:)
 
 2. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9),
 representing the minutes as a base ten integer in the range 0 ≤ minutes ≤ 59.
 
 3. A U+003A COLON character (:)
 
 4. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 seconds as a base ten integer in the range 0 ≤ seconds ≤ 59.
 
 5. A U+002E FULL STOP character (.).
 
 6. Three characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 thousandths of a second seconds-frac as a base ten integer.
 */
TEST_F(CueTimeStamp, StartTimeStampHoursNDigitsMiddle)
{
	loadVtt( "cue-timings/timestamp_hours_n_digits_mid_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
	ASSERT_EQ( 5544, getCue(0).startTime().hours() );
}

TEST_F(CueTimeStamp, EndTimeStampHoursNDigitsMiddle)
{
	loadVtt( "cue-timings/timestamp_hours_n_digits_mid_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
	ASSERT_EQ( 5544, getCue(0).endTime().hours() );
}

/*
 Test expecting parser to succeed when a 4 component timestamp's 'hours' component
 and it's delimiter is omitted.
 
 From http://dev.w3.org/html5/webvtt/#webvtt-timestamp (10/15/2012):
 A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds,
 and thousandths of a second seconds-frac, consists of the following components,
 in the given order:
 1. Optionally (required if hour is non-zero):
 1. Two or more characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT
 NINE (9), representing the hours as a base ten integer.
 
 2. A U+003A COLON character (:)
 
 2. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9),
 representing the minutes as a base ten integer in the range 0 ≤ minutes ≤ 59.
 
 3. A U+003A COLON character (:)
 
 4. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 seconds as a base ten integer in the range 0 ≤ seconds ≤ 59.
 
 5. A U+002E FULL STOP character (.).
 
 6. Three characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 thousandths of a second seconds-frac as a base ten integer.
 */

TEST_F(CueTimeStamp, TimeStampHoursOmitted)
{
	loadVtt( "cue-timings/timestamp_hours_omitted_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
}

/*
 Test expecting parser to succeed when a 4 component timestamp's 'seconds-frac' component
 is a 3 digit character at the high end of the valid range
 
 From http://dev.w3.org/html5/webvtt/#webvtt-timestamp (10/15/2012):
 A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds,
 and thousandths of a second seconds-frac, consists of the following components,
 in the given order:
 1. Optionally (required if hour is non-zero):
 1. Two or more characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT
 NINE (9), representing the hours as a base ten integer.
 
 2. A U+003A COLON character (:)
 
 2. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9),
 representing the minutes as a base ten integer in the range 0 ≤ minutes ≤ 59.
 
 3. A U+003A COLON character (:)
 
 4. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 seconds as a base ten integer in the range 0 ≤ seconds ≤ 59.
 
 5. A U+002E FULL STOP character (.).
 
 6. Three characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 thousandths of a second seconds-frac as a base ten integer.
 */
TEST_F(CueTimeStamp, StartTimeStampMilliSecondsHigh)
{
	loadVtt( "cue-timings/timestamp_milliseconds_high_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 999, getCue(0).startTime().milliseconds() );
}

TEST_F(CueTimeStamp, EndTimeStampMilliSecondsHigh)
{
	loadVtt( "cue-timings/timestamp_milliseconds_high_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 999, getCue(0).endTime().milliseconds() );
}

/*
 Test expecting parser to succeed when a 4 component timestamp's 'seconds-frac' component
 is a 3 digit character at the low end of the valid range
 
 From http://dev.w3.org/html5/webvtt/#webvtt-timestamp (10/15/2012):
 A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds,
 and thousandths of a second seconds-frac, consists of the following components,
 in the given order:
 1. Optionally (required if hour is non-zero):
 1. Two or more characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT
 NINE (9), representing the hours as a base ten integer.
 
 2. A U+003A COLON character (:)
 
 2. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9),
 representing the minutes as a base ten integer in the range 0 ≤ minutes ≤ 59.
 
 3. A U+003A COLON character (:)
 
 4. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 seconds as a base ten integer in the range 0 ≤ seconds ≤ 59.
 
 5. A U+002E FULL STOP character (.).
 
 6. Three characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 thousandths of a second seconds-frac as a base ten integer.
 */

TEST_F(CueTimeStamp, StartTimeStampMilliSecondsLow)
{
	loadVtt( "cue-timings/timestamp_milliseconds_low_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 000, getCue(0).startTime().milliseconds() );
}

TEST_F(CueTimeStamp, EndTimeStampMilliSecondsLow)
{
	loadVtt( "cue-timings/timestamp_milliseconds_low_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 000, getCue(0).endTime().milliseconds() );
}

/*
 Test expecting parser to succeed when a 4 component timestamp's 'seconds-frac' component
 is a 3 digit character at the middle of the valid range
 
 From http://dev.w3.org/html5/webvtt/#webvtt-timestamp (10/15/2012):
 A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds,
 and thousandths of a second seconds-frac, consists of the following components,
 in the given order:
 1. Optionally (required if hour is non-zero):
 1. Two or more characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT
 NINE (9), representing the hours as a base ten integer.
 
 2. A U+003A COLON character (:)
 
 2. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9),
 representing the minutes as a base ten integer in the range 0 ≤ minutes ≤ 59.
 
 3. A U+003A COLON character (:)
 
 4. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 seconds as a base ten integer in the range 0 ≤ seconds ≤ 59.
 
 5. A U+002E FULL STOP character (.).
 
 6. Three characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 thousandths of a second seconds-frac as a base ten integer.
 */
TEST_F(CueTimeStamp, StartTimeStampMilliSecondsMiddle)
{
	loadVtt( "cue-timings/timestamp_milliseconds_mid_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 555, getCue(0).startTime().milliseconds() );
}

TEST_F(CueTimeStamp, EndTimeStampMilliSecondsMiddle)
{
	loadVtt( "cue-timings/timestamp_milliseconds_mid_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 555, getCue(0).endTime().milliseconds() );
}

/*
 Test expecting parser to succeed when a 4 component timestamp's 'minutes' component
 is a 2 digit character at the high end of the valid range
 
 From http://dev.w3.org/html5/webvtt/#webvtt-timestamp (10/15/2012):
 A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds,
 and thousandths of a second seconds-frac, consists of the following components,
 in the given order:
 1. Optionally (required if hour is non-zero):
 1. Two or more characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT
 NINE (9), representing the hours as a base ten integer.
 
 2. A U+003A COLON character (:)
 
 2. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9),
 representing the minutes as a base ten integer in the range 0 ≤ minutes ≤ 59.
 
 3. A U+003A COLON character (:)
 
 4. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 seconds as a base ten integer in the range 0 ≤ seconds ≤ 59.
 
 5. A U+002E FULL STOP character (.).
 
 6. Three characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 thousandths of a second seconds-frac as a base ten integer.
 */
TEST_F(CueTimeStamp, StartTimeStampMinutesHigh)
{
	loadVtt( "cue-timings/timestamp_minutes_high_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 59, getCue(0).startTime().minutes() );
}

TEST_F(CueTimeStamp, EndTimeStampMinutesHigh)
{
	loadVtt( "cue-timings/timestamp_minutes_high_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 59, getCue(0).endTime().minutes() );
}

/*
 Test expecting parser to succeed when a 4 component timestamp's 'minutes' component
 is a 2 digit character at the low end of the valid range
 
 From http://dev.w3.org/html5/webvtt/#webvtt-timestamp (10/15/2012):
 A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds,
 and thousandths of a second seconds-frac, consists of the following components,
 in the given order:
 1. Optionally (required if hour is non-zero):
 1. Two or more characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT
 NINE (9), representing the hours as a base ten integer.
 
 2. A U+003A COLON character (:)
 
 2. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9),
 representing the minutes as a base ten integer in the range 0 ≤ minutes ≤ 59.
 
 3. A U+003A COLON character (:)
 
 4. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 seconds as a base ten integer in the range 0 ≤ seconds ≤ 59.
 
 5. A U+002E FULL STOP character (.).
 
 6. Three characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 thousandths of a second seconds-frac as a base ten integer.
 */
TEST_F(CueTimeStamp, StartTimeStampMinutesLow)
{
	loadVtt( "cue-timings/timestamp_minutes_low_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 00, getCue(0).startTime().minutes() );
}

TEST_F(CueTimeStamp, EndTimeStampMinutesLow)
{
	loadVtt( "cue-timings/timestamp_minutes_low_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 00, getCue(0).endTime().minutes() );
}

/*
 Test expecting parser to succeed when a 4 component timestamp's 'minutes' component
 is a 2 digit character at the middle of the valid range
 
 From http://dev.w3.org/html5/webvtt/#webvtt-timestamp (10/15/2012):
 A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds,
 and thousandths of a second seconds-frac, consists of the following components,
 in the given order:
 1. Optionally (required if hour is non-zero):
 1. Two or more characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT
 NINE (9), representing the hours as a base ten integer.
 
 2. A U+003A COLON character (:)
 
 2. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9),
 representing the minutes as a base ten integer in the range 0 ≤ minutes ≤ 59.
 
 3. A U+003A COLON character (:)
 
 4. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 seconds as a base ten integer in the range 0 ≤ seconds ≤ 59.
 
 5. A U+002E FULL STOP character (.).
 
 6. Three characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 thousandths of a second seconds-frac as a base ten integer.
 */

TEST_F(CueTimeStamp, StartTimeStampMinutesMiddle)
{
	loadVtt( "cue-timings/timestamp_minutes_mid_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 30, getCue(0).startTime().minutes() );
}

TEST_F(CueTimeStamp, EndTimeStampMinutesMiddle)
{
	loadVtt( "cue-timings/timestamp_minutes_mid_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 30, getCue(0).endTime().minutes() );
}

/*
 Test expecting parser to succeed when a 4 component timestamp's 'seconds' component
 is a 2 digit character at the high end of the valid range
 
 From http://dev.w3.org/html5/webvtt/#webvtt-timestamp (10/15/2012):
 A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds,
 and thousandths of a second seconds-frac, consists of the following components,
 in the given order:
 1. Optionally (required if hour is non-zero):
 1. Two or more characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT
 NINE (9), representing the hours as a base ten integer.
 
 2. A U+003A COLON character (:)
 
 2. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9),
 representing the minutes as a base ten integer in the range 0 ≤ minutes ≤ 59.
 
 3. A U+003A COLON character (:)
 
 4. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 seconds as a base ten integer in the range 0 ≤ seconds ≤ 59.
 
 5. A U+002E FULL STOP character (.).
 
 6. Three characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 thousandths of a second seconds-frac as a base ten integer.
 */
TEST_F(CueTimeStamp, StartTimeStampSecondsHigh)
{
	loadVtt( "cue-timings/timestamp_seconds_high_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 59, getCue(0).startTime().seconds() );
}

TEST_F(CueTimeStamp, EndTimeStampSecondsHigh)
{
	loadVtt( "cue-timings/timestamp_seconds_high_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 59, getCue(0).endTime().seconds() );
}

/*
 Test expecting parser to succeed when a 4 component timestamp's 'seconds' component
 is a 2 digit character at the low end of the valid range
 
 From http://dev.w3.org/html5/webvtt/#webvtt-timestamp (10/15/2012):
 A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds,
 and thousandths of a second seconds-frac, consists of the following components,
 in the given order:
 1. Optionally (required if hour is non-zero):
 1. Two or more characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT
 NINE (9), representing the hours as a base ten integer.
 
 2. A U+003A COLON character (:)
 
 2. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9),
 representing the minutes as a base ten integer in the range 0 ≤ minutes ≤ 59.
 
 3. A U+003A COLON character (:)
 
 4. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 seconds as a base ten integer in the range 0 ≤ seconds ≤ 59.
 
 5. A U+002E FULL STOP character (.).
 
 6. Three characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 thousandths of a second seconds-frac as a base ten integer.
 */
TEST_F(CueTimeStamp, StartTimeStampSecondsLow)
{
	loadVtt( "cue-timings/timestamp_seconds_low_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 00, getCue(0).startTime().seconds() );
}

TEST_F(CueTimeStamp, EndTimeStampSecondsLow)
{
	loadVtt( "cue-timings/timestamp_seconds_low_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 00, getCue(0).endTime().seconds() );
}

/*
 Test expecting parser to succeed when a 4 component timestamp's 'seconds' component
 is a 2 digit character at the middle of the valid range
 
 From http://dev.w3.org/html5/webvtt/#webvtt-timestamp (10/15/2012):
 A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds,
 and thousandths of a second seconds-frac, consists of the following components,
 in the given order:
 1. Optionally (required if hour is non-zero):
 1. Two or more characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT
 NINE (9), representing the hours as a base ten integer.
 
 2. A U+003A COLON character (:)
 
 2. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9),
 representing the minutes as a base ten integer in the range 0 ≤ minutes ≤ 59.
 
 3. A U+003A COLON character (:)
 
 4. Two characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 seconds as a base ten integer in the range 0 ≤ seconds ≤ 59.
 
 5. A U+002E FULL STOP character (.).
 
 6. Three characters in the range U+0030 DIGIT ZERO (0) to U+0039 DIGIT NINE (9), representing the
 thousandths of a second seconds-frac as a base ten integer.
 */
TEST_F(CueTimeStamp, StartTimeStampSecondsMiddle)
{
	loadVtt( "cue-timings/timestamp_seconds_mid_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 30, getCue(0).startTime().seconds() );
}

TEST_F(CueTimeStamp, EndTimeStampSecondsMiddle)
{
	loadVtt( "cue-timings/timestamp_seconds_mid_good.vtt", 1 );
	ASSERT_EQ( 0, errorCount() ) <<"This file should contain no errors.";
    ASSERT_EQ( 30, getCue(0).endTime().seconds() );
}
