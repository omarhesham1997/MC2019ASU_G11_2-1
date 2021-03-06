 /*!     \file include/types.h
  *      \brief Generic types.
  *      \author Andrea Righi <drizzt@inwind.it>
  *      \date Last update: 2004-01-27
  *      \note Copyright (&copy;) 2003 Andrea Righi
  */
 
 #ifndef TYPES_H
 #define TYPES_H
 
 typedef unsigned char           byte;
 typedef unsigned short          word;
 typedef unsigned int            dword;
 typedef int                     bool;
 typedef signed char             int8_t;
 typedef unsigned char           uint8_t;
 typedef signed short int        int16_t;
 typedef unsigned short int      uint16_t;
 typedef signed int              int32_t;
 typedef unsigned int            uint32_t;
 typedef unsigned long long      uint64_t;
 typedef long long               int64_t;
 typedef int8_t                  int8;
 typedef uint8_t                 uint8;
 typedef int16_t                 int16;
 typedef uint16_t                uint16;
 typedef int32_t                 int32;
 typedef uint32_t                uint32;
 typedef int64_t                 int64;
 typedef uint64_t                uint64;
 typedef unsigned char           uchar_t;
 typedef uint32_t                wchar_t;
 typedef uint32_t                size_t;
 typedef uint32_t                addr_t;
 typedef int32_t                 pid_t;
 
 typedef enum Port_PinDirectionType{PORT_PIN_IN,PORT_PIN_OUT}
 Port_PinDirectionType;
 typedef enum Dio_LevelType{STD_LOW,STD_HIGH}
 Dio_LevelType;
 typedef enum Button_Type{PULL_UP,PULL_DOWN}
 Button_Type;


 #endif