#include <stdint.h>
typedef struct
{
  uint8_t o_myseqno ;
  uint8_t o_yourseqno ;
} OUTPUT_MESSAGE_TYPE ;

typedef struct
{
  uint8_t i_yourseqno ;
  uint8_t i_myseqno ;
} INPUT_MESSAGE_TYPE ;

#define BAUD_RATE 38400
