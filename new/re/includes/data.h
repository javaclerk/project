#pragma once

#define IPC_DATA_MAX_SIZE 10

typedef struct {
  long			mtype;          //64bit = 8Byte
  uint32_t      opcode; //unsigned long 32비트 4바이트
  uint32_t      LN;
  uint32_t      P;
  uint32_t      S;
  uint32_t      E;

  uint32_t      data_size; //unsigned long 32비트 4바이트
  uint8_t	    data[IPC_DATA_MAX_SIZE];  //unsigned char 8바이트 1비트
} stIpcMsg ;

typedef enum OP{  OPCODE_LED = 1, OPCODE_TEMP, OPCODE_GPS } op;
typedef enum LN{ LN_1 =1, LN_2, LN_3, LN_4, LN_5 } ln;
typedef enum P{  P_1=1, P_2, P_3 } p;
typedef enum Time{  S, E } t;

typedef struct {
  char opcode1, LedNum1, patter1;
  int opcode, LedNum, patter, i;
  int z=1;
  int counter = 0;
} c_data;

typedef struct {
  key_t key;
  int msgid;
} stmq;

typedef struct {
  int StartTime, EndTime;

  time_t timer;
  struct tm* t;
} sttime;

extern c_data data;
extern stIpcMsg msg;
extern stmq mq;
extern sttime timer;

enum LED_TYPE{
    LED_TYPE_GNSS = 0,
    LED_TYPE_WAVE,
    LED_TYPE_C_V2X,
    LED_TYPE_5G,
    LED_TYPE_RUN
};

enum TEMP_TYPE
{
    TEMP_TYPE_0 = 0,
    TEMP_TYPE_1
};
