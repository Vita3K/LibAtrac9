#pragma once

typedef enum at9_status
{
	ERR_SUCCESS = 0,

	ERR_NOT_IMPLEMENTED = 0x80000000,

	ERR_BAD_CONFIG_DATA = 0x81000000,
	
	ERR_UNPACK_SUPERFRAME_FLAG_INVALID = 0x82000000,
	ERR_UNPACK_REUSE_BAND_PARAMS_INVALID,
	ERR_UNPACK_BAND_PARAMS_INVALID,

	ERR_UNPACK_GRAD_BOUNDARY_INVALID = 0x82100000,
	ERR_UNPACK_GRAD_START_UNIT_OOB,
	ERR_UNPACK_GRAD_END_UNIT_OOB,
	ERR_UNPACK_GRAD_START_VALUE_OOB,
	ERR_UNPACK_GRAD_END_VALUE_OOB,
	ERR_UNPACK_GRAD_END_UNIT_INVALID, // start_unit > end_unit

	ERR_UNPACK_SCALE_FACTOR_MODE_INVALID,
	ERR_UNPACK_SCALE_FACTOR_OOB,

	ERR_UNPACK_EXTENSION_DATA_INVALID
} at9_status;

#define ERROR_CHECK(x) do { \
  at9_status status = (x); \
  if (status != ERR_SUCCESS) { \
    return status; \
  } \
} while (0)
