/* Generated from Opc.Ua.CNC.NodeSet.bsd with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host hyper-debian by user nb at 2020-11-19 10:54:48 */

#ifndef TYPES_NC_GENERATED_HANDLING_H_
#define TYPES_NC_GENERATED_HANDLING_H_

#include "types_nc_generated.h"

_UA_BEGIN_DECLS

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wmissing-field-initializers"
# pragma GCC diagnostic ignored "-Wmissing-braces"
#endif


/* CncPositionDataType */
static UA_INLINE void
UA_CncPositionDataType_init(UA_CncPositionDataType *p) {
    memset(p, 0, sizeof(UA_CncPositionDataType));
}

static UA_INLINE UA_CncPositionDataType *
UA_CncPositionDataType_new(void) {
    return (UA_CncPositionDataType*)UA_new(&UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CncPositionDataType_copy(const UA_CncPositionDataType *src, UA_CncPositionDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CncPositionDataType_deleteMembers(UA_CncPositionDataType *p) {
    UA_clear(p, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
}

static UA_INLINE void
UA_CncPositionDataType_clear(UA_CncPositionDataType *p) {
    UA_clear(p, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
}

static UA_INLINE void
UA_CncPositionDataType_delete(UA_CncPositionDataType *p) {
    UA_delete(p, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
}

/* CncChannelStatus */
static UA_INLINE void
UA_CncChannelStatus_init(UA_CncChannelStatus *p) {
    memset(p, 0, sizeof(UA_CncChannelStatus));
}

static UA_INLINE UA_CncChannelStatus *
UA_CncChannelStatus_new(void) {
    return (UA_CncChannelStatus*)UA_new(&UA_TYPES_NC[UA_TYPES_NC_CNCCHANNELSTATUS]);
}

static UA_INLINE UA_StatusCode
UA_CncChannelStatus_copy(const UA_CncChannelStatus *src, UA_CncChannelStatus *dst) {
    return UA_copy(src, dst, &UA_TYPES_NC[UA_TYPES_NC_CNCCHANNELSTATUS]);
}

UA_DEPRECATED static UA_INLINE void
UA_CncChannelStatus_deleteMembers(UA_CncChannelStatus *p) {
    UA_clear(p, &UA_TYPES_NC[UA_TYPES_NC_CNCCHANNELSTATUS]);
}

static UA_INLINE void
UA_CncChannelStatus_clear(UA_CncChannelStatus *p) {
    UA_clear(p, &UA_TYPES_NC[UA_TYPES_NC_CNCCHANNELSTATUS]);
}

static UA_INLINE void
UA_CncChannelStatus_delete(UA_CncChannelStatus *p) {
    UA_delete(p, &UA_TYPES_NC[UA_TYPES_NC_CNCCHANNELSTATUS]);
}

/* CncChannelProgramStatus */
static UA_INLINE void
UA_CncChannelProgramStatus_init(UA_CncChannelProgramStatus *p) {
    memset(p, 0, sizeof(UA_CncChannelProgramStatus));
}

static UA_INLINE UA_CncChannelProgramStatus *
UA_CncChannelProgramStatus_new(void) {
    return (UA_CncChannelProgramStatus*)UA_new(&UA_TYPES_NC[UA_TYPES_NC_CNCCHANNELPROGRAMSTATUS]);
}

static UA_INLINE UA_StatusCode
UA_CncChannelProgramStatus_copy(const UA_CncChannelProgramStatus *src, UA_CncChannelProgramStatus *dst) {
    return UA_copy(src, dst, &UA_TYPES_NC[UA_TYPES_NC_CNCCHANNELPROGRAMSTATUS]);
}

UA_DEPRECATED static UA_INLINE void
UA_CncChannelProgramStatus_deleteMembers(UA_CncChannelProgramStatus *p) {
    UA_clear(p, &UA_TYPES_NC[UA_TYPES_NC_CNCCHANNELPROGRAMSTATUS]);
}

static UA_INLINE void
UA_CncChannelProgramStatus_clear(UA_CncChannelProgramStatus *p) {
    UA_clear(p, &UA_TYPES_NC[UA_TYPES_NC_CNCCHANNELPROGRAMSTATUS]);
}

static UA_INLINE void
UA_CncChannelProgramStatus_delete(UA_CncChannelProgramStatus *p) {
    UA_delete(p, &UA_TYPES_NC[UA_TYPES_NC_CNCCHANNELPROGRAMSTATUS]);
}

/* CncOperationMode */
static UA_INLINE void
UA_CncOperationMode_init(UA_CncOperationMode *p) {
    memset(p, 0, sizeof(UA_CncOperationMode));
}

static UA_INLINE UA_CncOperationMode *
UA_CncOperationMode_new(void) {
    return (UA_CncOperationMode*)UA_new(&UA_TYPES_NC[UA_TYPES_NC_CNCOPERATIONMODE]);
}

static UA_INLINE UA_StatusCode
UA_CncOperationMode_copy(const UA_CncOperationMode *src, UA_CncOperationMode *dst) {
    return UA_copy(src, dst, &UA_TYPES_NC[UA_TYPES_NC_CNCOPERATIONMODE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CncOperationMode_deleteMembers(UA_CncOperationMode *p) {
    UA_clear(p, &UA_TYPES_NC[UA_TYPES_NC_CNCOPERATIONMODE]);
}

static UA_INLINE void
UA_CncOperationMode_clear(UA_CncOperationMode *p) {
    UA_clear(p, &UA_TYPES_NC[UA_TYPES_NC_CNCOPERATIONMODE]);
}

static UA_INLINE void
UA_CncOperationMode_delete(UA_CncOperationMode *p) {
    UA_delete(p, &UA_TYPES_NC[UA_TYPES_NC_CNCOPERATIONMODE]);
}

/* CncSpindleTurnDirection */
static UA_INLINE void
UA_CncSpindleTurnDirection_init(UA_CncSpindleTurnDirection *p) {
    memset(p, 0, sizeof(UA_CncSpindleTurnDirection));
}

static UA_INLINE UA_CncSpindleTurnDirection *
UA_CncSpindleTurnDirection_new(void) {
    return (UA_CncSpindleTurnDirection*)UA_new(&UA_TYPES_NC[UA_TYPES_NC_CNCSPINDLETURNDIRECTION]);
}

static UA_INLINE UA_StatusCode
UA_CncSpindleTurnDirection_copy(const UA_CncSpindleTurnDirection *src, UA_CncSpindleTurnDirection *dst) {
    return UA_copy(src, dst, &UA_TYPES_NC[UA_TYPES_NC_CNCSPINDLETURNDIRECTION]);
}

UA_DEPRECATED static UA_INLINE void
UA_CncSpindleTurnDirection_deleteMembers(UA_CncSpindleTurnDirection *p) {
    UA_clear(p, &UA_TYPES_NC[UA_TYPES_NC_CNCSPINDLETURNDIRECTION]);
}

static UA_INLINE void
UA_CncSpindleTurnDirection_clear(UA_CncSpindleTurnDirection *p) {
    UA_clear(p, &UA_TYPES_NC[UA_TYPES_NC_CNCSPINDLETURNDIRECTION]);
}

static UA_INLINE void
UA_CncSpindleTurnDirection_delete(UA_CncSpindleTurnDirection *p) {
    UA_delete(p, &UA_TYPES_NC[UA_TYPES_NC_CNCSPINDLETURNDIRECTION]);
}

/* CncAxisStatus */
static UA_INLINE void
UA_CncAxisStatus_init(UA_CncAxisStatus *p) {
    memset(p, 0, sizeof(UA_CncAxisStatus));
}

static UA_INLINE UA_CncAxisStatus *
UA_CncAxisStatus_new(void) {
    return (UA_CncAxisStatus*)UA_new(&UA_TYPES_NC[UA_TYPES_NC_CNCAXISSTATUS]);
}

static UA_INLINE UA_StatusCode
UA_CncAxisStatus_copy(const UA_CncAxisStatus *src, UA_CncAxisStatus *dst) {
    return UA_copy(src, dst, &UA_TYPES_NC[UA_TYPES_NC_CNCAXISSTATUS]);
}

UA_DEPRECATED static UA_INLINE void
UA_CncAxisStatus_deleteMembers(UA_CncAxisStatus *p) {
    UA_clear(p, &UA_TYPES_NC[UA_TYPES_NC_CNCAXISSTATUS]);
}

static UA_INLINE void
UA_CncAxisStatus_clear(UA_CncAxisStatus *p) {
    UA_clear(p, &UA_TYPES_NC[UA_TYPES_NC_CNCAXISSTATUS]);
}

static UA_INLINE void
UA_CncAxisStatus_delete(UA_CncAxisStatus *p) {
    UA_delete(p, &UA_TYPES_NC[UA_TYPES_NC_CNCAXISSTATUS]);
}

/* CncSpindleStatus */
static UA_INLINE void
UA_CncSpindleStatus_init(UA_CncSpindleStatus *p) {
    memset(p, 0, sizeof(UA_CncSpindleStatus));
}

static UA_INLINE UA_CncSpindleStatus *
UA_CncSpindleStatus_new(void) {
    return (UA_CncSpindleStatus*)UA_new(&UA_TYPES_NC[UA_TYPES_NC_CNCSPINDLESTATUS]);
}

static UA_INLINE UA_StatusCode
UA_CncSpindleStatus_copy(const UA_CncSpindleStatus *src, UA_CncSpindleStatus *dst) {
    return UA_copy(src, dst, &UA_TYPES_NC[UA_TYPES_NC_CNCSPINDLESTATUS]);
}

UA_DEPRECATED static UA_INLINE void
UA_CncSpindleStatus_deleteMembers(UA_CncSpindleStatus *p) {
    UA_clear(p, &UA_TYPES_NC[UA_TYPES_NC_CNCSPINDLESTATUS]);
}

static UA_INLINE void
UA_CncSpindleStatus_clear(UA_CncSpindleStatus *p) {
    UA_clear(p, &UA_TYPES_NC[UA_TYPES_NC_CNCSPINDLESTATUS]);
}

static UA_INLINE void
UA_CncSpindleStatus_delete(UA_CncSpindleStatus *p) {
    UA_delete(p, &UA_TYPES_NC[UA_TYPES_NC_CNCSPINDLESTATUS]);
}

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic pop
#endif

_UA_END_DECLS

#endif /* TYPES_NC_GENERATED_HANDLING_H_ */
