[Variables]
;===== Positioning options =====
;Cell Dimensions - The dimensions of the individual string meters.
C.w=(30*#DroptopSize#)
C.h=(30*#DroptopSize#)

;Vertical space between cells
Space.x=(10*#DroptopSize#)

;Horizontal space between cells
Space.y=(10*#DroptopSize#)

;Space on left and right of calendar
Bumper.x=(20*#DroptopSize#)

;Space on top of calendar
Bumper.top=(10*#DroptopSize#)

;Space on bottom of calendar
Bumper.bottom=(10*#DroptopSize#)

;===== Calendar options =====

DisableScroll=0

;===== DON'T MODIFY =====

ShowMoonPhases=0
ShowEvents=#CalendarEvents#
StartOnMonday=#StartMonday#
MonthLabels=#*Month1*#|#*Month2*#|#*Month3*#|#*Month4*#|#*Month5*#|#*Month6*#|#*Month7*#|#*Month8*#|#*Month9*#|#*Month10*#|#*Month11*#|#*Month12*#
EventFile=#SKINSPATH#Droptop\@Resources\Calendars\[#Language[#LanguageNum]]\Holidays.xml
DayLabels=#*Day1Shorthand*#|#*Day2Shorthand*#|#*Day3Shorthand*#|#*Day4Shorthand*#|#*Day5Shorthand*#|#*Day6Shorthand*#|#*Day7Shorthand*#
HideLastWeek=0
LeadingZeroes=0
MoonColor=
NextFormat=
LabelText=