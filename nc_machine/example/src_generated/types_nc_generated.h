/* Generated from Opc.Ua.CNC.NodeSet.bsd with script /usr/local/share/open62541/tools/generate_datatypes.py * on host hyper-debian by user nb at 2020-11-18 01:27:08 */

#ifndef TYPES_NC_GENERATED_H_
#define TYPES_NC_GENERATED_H_

#ifdef UA_ENABLE_AMALGAMATION
#include "open62541.h"
#else
#include <open62541/types.h>
#include <open62541/types_generated.h>

#endif

_UA_BEGIN_DECLS


/**
 * Every type is assigned an index in an array containing the type descriptions.
 * These descriptions are used during type handling (copying, deletion,
 * binary encoding, ...). */
#define UA_TYPES_NC_COUNT 7
extern UA_EXPORT const UA_DataType UA_TYPES_NC[UA_TYPES_NC_COUNT];

/**
 * CncPositionDataType
 * ^^^^^^^^^^^^^^^^^^^
 * Structure of position elements. */
typedef struct {
    UA_Double actPos;
    UA_Double cmdPos;
    UA_Double remDist;
} UA_CncPositionDataType;

#define UA_TYPES_NC_CNCPOSITIONDATATYPE 0

/**
 * CncChannelStatus
 * ^^^^^^^^^^^^^^^^
 * Status of a CNC channel. */
typedef enum {
    UA_CNCCHANNELSTATUS_ACTIVE = 0,
    UA_CNCCHANNELSTATUS_INTERRUPTED = 1,
    UA_CNCCHANNELSTATUS_RESET = 2,
    __UA_CNCCHANNELSTATUS_FORCE32BIT = 0x7fffffff
} UA_CncChannelStatus;
UA_STATIC_ASSERT(sizeof(UA_CncChannelStatus) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_NC_CNCCHANNELSTATUS 1

/**
 * CncChannelProgramStatus
 * ^^^^^^^^^^^^^^^^^^^^^^^
 * Status of program execution within a channel. */
typedef enum {
    UA_CNCCHANNELPROGRAMSTATUS_STOPPED = 0,
    UA_CNCCHANNELPROGRAMSTATUS_RUNNING = 1,
    UA_CNCCHANNELPROGRAMSTATUS_WAITING = 2,
    UA_CNCCHANNELPROGRAMSTATUS_INTERRUPTED = 3,
    UA_CNCCHANNELPROGRAMSTATUS_CANCELED = 4,
    __UA_CNCCHANNELPROGRAMSTATUS_FORCE32BIT = 0x7fffffff
} UA_CncChannelProgramStatus;
UA_STATIC_ASSERT(sizeof(UA_CncChannelProgramStatus) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_NC_CNCCHANNELPROGRAMSTATUS 2

/**
 * CncOperationMode
 * ^^^^^^^^^^^^^^^^
 * Modes of operation. */
typedef enum {
    UA_CNCOPERATIONMODE_MANUAL = 0,
    UA_CNCOPERATIONMODE_MDA = 1,
    UA_CNCOPERATIONMODE_AUTOMATIC = 2,
    __UA_CNCOPERATIONMODE_FORCE32BIT = 0x7fffffff
} UA_CncOperationMode;
UA_STATIC_ASSERT(sizeof(UA_CncOperationMode) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_NC_CNCOPERATIONMODE 3

/**
 * CncSpindleTurnDirection
 * ^^^^^^^^^^^^^^^^^^^^^^^
 * Turn direction of a CNC spindle. */
typedef enum {
    UA_CNCSPINDLETURNDIRECTION_NONE = 0,
    UA_CNCSPINDLETURNDIRECTION_CW = 1,
    UA_CNCSPINDLETURNDIRECTION_CCW = 2,
    __UA_CNCSPINDLETURNDIRECTION_FORCE32BIT = 0x7fffffff
} UA_CncSpindleTurnDirection;
UA_STATIC_ASSERT(sizeof(UA_CncSpindleTurnDirection) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_NC_CNCSPINDLETURNDIRECTION 4

/**
 * CncAxisStatus
 * ^^^^^^^^^^^^^
 * Status of a CNC axis. */
typedef enum {
    UA_CNCAXISSTATUS_INPOSITION = 0,
    UA_CNCAXISSTATUS_MOVING = 1,
    UA_CNCAXISSTATUS_PARKED = 2,
    __UA_CNCAXISSTATUS_FORCE32BIT = 0x7fffffff
} UA_CncAxisStatus;
UA_STATIC_ASSERT(sizeof(UA_CncAxisStatus) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_NC_CNCAXISSTATUS 5

/**
 * CncSpindleStatus
 * ^^^^^^^^^^^^^^^^
 * Status of a CNC spindle. */
typedef enum {
    UA_CNCSPINDLESTATUS_STOPPED = 0,
    UA_CNCSPINDLESTATUS_INTARGETAREA = 1,
    UA_CNCSPINDLESTATUS_ACCELERATING = 2,
    UA_CNCSPINDLESTATUS_DECELERATING = 3,
    UA_CNCSPINDLESTATUS_PARKED = 4,
    __UA_CNCSPINDLESTATUS_FORCE32BIT = 0x7fffffff
} UA_CncSpindleStatus;
UA_STATIC_ASSERT(sizeof(UA_CncSpindleStatus) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_NC_CNCSPINDLESTATUS 6


_UA_END_DECLS

#endif /* TYPES_NC_GENERATED_H_ */
