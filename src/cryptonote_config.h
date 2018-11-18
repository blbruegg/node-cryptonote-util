#pragma once
/*
#define CRYPTONOTE_PUBLIC_ADDRESS_TEXTBLOB_VER          0
#define CURRENT_TRANSACTION_VERSION                     1
#define CURRENT_BLOCK_MAJOR_VERSION                     1
#define CURRENT_BLOCK_MINOR_VERSION                     0

#define COIN                                            ((uint64_t)100000000) // pow(10, 8)
#define DEFAULT_FEE                                     ((uint64_t)1000000) // pow(10, 6)


#define CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW            60
#define CRYPTONOTE_DISPLAY_DECIMAL_POINT                12
*/
#define CURRENT_TRANSACTION_VERSION 1

enum BLOB_TYPE {
  BLOB_TYPE_CRYPTONOTE  = 0,
  BLOB_TYPE_FORKNOTE1   = 1,
  BLOB_TYPE_FORKNOTE2   = 2,
  BLOB_TYPE_CRYPTONOTE2 = 3, // Masari
  BLOB_TYPE_CRYPTONOTE_RYO = 4, // Ryo
  BLOB_TYPE_CRYPTONOTE_LOKI = 5, // Loki
  BLOB_TYPE_BOOLBERRY = 6 // BBR
};
