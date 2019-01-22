"RESET"
"DFU"
"CONNECT" // Particle
"DISCONNECT"  // Particle
"WIFISCAN"
"WIFILSTN"
"WIFION"
"WIFIOFF"
"WIFICONNECT"
"WIFIDISCONNECT"
"WIFICLEAR"
"APCLEAR" // Reset to PHOTON Prefix
"MEMORY"  // Get free memory
"TIME"    // Get Current Time
"ERASE"   // Erase EEPROM Memory
"EEPROM"  // Does nothing yet
"DUMP" - "TIME,FWV,IDP,IDW,RETH,RLTH,RFTH,GRP,PAU,POW,MOD,SET,SCH,AUT,MAN,DIF,OSC,CMF,TST,DSA,"
                      "DSD,DSO,DST,TZN,SSID,BRT,UIL,UIO,WFO,FAN1,FAN2,FAN3,FAN4,FAN8,FAN9,FAN10,PRH,RHU,"
                      "PTM,TMP,WTE,WTL,OUT,TRE,CUP,WTC,TRS,RLE,AUC,WTF,WTA,FAP,RLV,LTU,RUN,MLW,MWS,RLS,RSW,"
                      "RSSI,TRO,TWC,TMI,TMR,MWA,FRM,WIFI,CLOUD,WIFIST"

"WATER" // Get Water Cal and Data

"CVT"   // Convert to base 64
"BOOTLOAD"  // Bootload Water Tank

// Getable Commands
"ALL"   //  Should get all but gets fan speed
"ALM"   //  Alarm (Returns number of alarms)
"AUT"   //  Auto Mode Setting
"BRT"   //  UI Brightness
"DMF"   //  Diagnostic Mode Fan
"DMT"   //  Diagnostic Mode Transducer
"EET"   //  Event End Time
"EFS"   //  Event Fan Speed
"EIT"   //  Event Intensity Setting
"EST"   //  Event Start Time
"EWD"   //  Event Weekdays
"CMF"   //  Comfort Mode
"CMIN"  //  Res Calibration Min
"CMAX"  //  Res Calibration Max
"CUP"   //  Cap Position
"DIF"   //  Diffuser Setting
"DSA"   //  Daylight Saving Activation Time
"DSD"   //  Daylight Saving Deactivation Time
"DSO"   //  Daylignt saving offset
"DST"   //  Daylight Saving Active
"FAN"   //  Fan Speed (Requires mode selection)
"FAP"   //  Fan Period
"FWV"   //  Firmware Version
"GRP"   //  Group
"IDP"   //  UID of the Product
"IDW"   //  UID of the Water Tank
"LTU"   //  Last Time Used
"MAN"   //  Manual Mode Setting
"MLW"   //  Muscle Wire Active
"MOD"   //  Mode
"MWA"   //  Muscle Wire Activations
"MWS"   //  Muscle Wire Status
"NEV"   //  Next Event
"OSC"   //  Oscillator Settings
"OUT"   //  Output
"PAU"   //  Pause
"POW"   //  Power
"PST"   //  Preset
"PRH"   //  Previous RHU
"PTM"   //  Previous Temperature
"RETH"  //  Reservoir Empty Threshold
"RLTH"  //  Reservoir Low Threshold
"RFTH"  //  Reservoir Full Thereshold
"RHU"   //  Relative Humidity
"RLV"   //  Reservoir Level
"RLS"   //  Reservoir	Level Sensor Reading
"RMS"   //  Room Size
"RSSI"  //  WiFi  Signal Strength
"RSW"   //  Reed Switch Reading
"RUN"   //  Run Time
"SCH"   //  Schedule - Returns 0
"SEA"   //  Schedule Events Active
"SEO"   //  Schedule Event Override
"SET"   //  Current Setting
"SSID"  //  Connected WiFi Name
"TBO"   //  Turbo
"TMI"   //  Timer Intensity
"TMP"   //  Temperature
"TMR"   //  Timer
"TRE"   //  Transducer Efficiency
"TRO"   //  Total Transducer On-Time
"TRS"   //  Transducer Setting
"TST"   //  Test Mode
"TTE"   //  Time to Empty
"TTT"   //  Time to Target
"TWC"   //  Total Water Consumption
"TZN"   //  Time Zone
"UID"   //  Base Unique ID
"UIF"   //  UI Firmware Version
"UIL"   //  UI Lockout
"UIM"   //  UI Mode
"UIO"   //  UI LED On-time
"WFO"   //  Water Freshness LED On-Time
"WTA"   //  WAter Age
"WTC"   //  Water Tank Connected
"WTE"   //  Water Tank Empty
"WTF"   //  Water Freshness
"WTL"   //  WAter Level

// Setable Commands 
"MAN" // Manual Mode
"AUT" // Auto mode
"CMF" // Comfort mode
"DIF" // Diffuser Mode
"OSC" // Oscillator Mode
"POW" // Power
"TST" // Test Flow
"TMR" // Timer
"ALM" // Alarm
"BRT" // Brightness
"CEE" // Change Event End Time
"CEF" // Change Event Fan
"CEI" // Change Evnet Intensity
"CES" // Change Event Setting
"CEW" // Change Event Weekday
"CWL" //  Calibrate Water Level Sensor
"DFN" // Debug Fan
"DMF" // Diagnostic Mode Fan Setting
"DMT" // Diagnostic Mode Trans Setting
"DSA" // Daylight Saving Time Activation
// DSD    S/G   Daylight Saving Time Deactivation
// DSO    S/G   Daylight Savings Offset
// DST    S/G   Daylight Savings
// EDE          Delete Schedule Event
// EVT          Create Schedule Event Commands
// FAN          Set Turbo Mode
// FRT	        Fill Reservoir Test
// GRP   S/G    Group Setting
// MOD9         Temp Fix for TST Mode
// MOD   S/G    Mode Setting
// MWA	        Muscle Wire Activate
// PAU   S/G    Pause   TODO
// PNG   S/G    Ping
// POW   S/G    Power   TODO
// PST          Set Preset 
// RMS   S/G    Room Size   TODO
// RTZ   S/G    Retrieve Timezone
// SCH   S/G    Schedule Mode
// SEA   s/g    Schedule Events Active
// SEO   s/g    chedule Event Override
// SET   S/G    Current Mode Setting  TODO
// SET   S/G    Current Mode Setting  TODO
// TMI   S/G    Timer Intensity
// TRS   S?/G   Transducer Setting    TODO
// TZN   S/G    Time Zone
// UID   S/G    UI Debug    TODO
// UIL   S/G    UI Lockout  TODO
// UIM   S/G    UI Mode    TODO
// UIO   S/G    UI LED On Time    TODO
// UIR   S/G    UI Reset  TODO
// WFO   S/G   Water Freshness LED On Time   TODO
//  WTA   Water Age TODO
//  WTF   S/G   Water Freshness   TODO
// CMIN         Set res magnet min position
// CMAX         Set res magnet max position
