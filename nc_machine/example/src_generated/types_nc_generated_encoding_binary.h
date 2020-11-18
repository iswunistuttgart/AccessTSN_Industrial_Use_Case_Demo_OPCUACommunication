/* Generated from Opc.Ua.CNC.NodeSet.bsd with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host hyper-debian by user nb at 2020-11-18 01:27:08 */

#ifndef TYPES_NC_GENERATED_ENCODING_BINARY_H_
#define TYPES_NC_GENERATED_ENCODING_BINARY_H_

#ifdef UA_ENABLE_AMALGAMATION
# include "open62541.h"
#else
# include "ua_types_encoding_binary.h"
# include "types_nc_generated.h"
#endif



/* CncPositionDataType */
static UA_INLINE size_t
UA_CncPositionDataType_calcSizeBinary(const UA_CncPositionDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CncPositionDataType_encodeBinary(const UA_CncPositionDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CncPositionDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CncPositionDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_NC[UA_TYPES_NC_CNCPOSITIONDATATYPE], NULL);
}

/* CncChannelStatus */
static UA_INLINE size_t
UA_CncChannelStatus_calcSizeBinary(const UA_CncChannelStatus *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_NC[UA_TYPES_NC_CNCCHANNELSTATUS]);
}
static UA_INLINE UA_StatusCode
UA_CncChannelStatus_encodeBinary(const UA_CncChannelStatus *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_NC[UA_TYPES_NC_CNCCHANNELSTATUS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CncChannelStatus_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CncChannelStatus *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_NC[UA_TYPES_NC_CNCCHANNELSTATUS], NULL);
}

/* CncChannelProgramStatus */
static UA_INLINE size_t
UA_CncChannelProgramStatus_calcSizeBinary(const UA_CncChannelProgramStatus *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_NC[UA_TYPES_NC_CNCCHANNELPROGRAMSTATUS]);
}
static UA_INLINE UA_StatusCode
UA_CncChannelProgramStatus_encodeBinary(const UA_CncChannelProgramStatus *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_NC[UA_TYPES_NC_CNCCHANNELPROGRAMSTATUS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CncChannelProgramStatus_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CncChannelProgramStatus *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_NC[UA_TYPES_NC_CNCCHANNELPROGRAMSTATUS], NULL);
}

/* CncOperationMode */
static UA_INLINE size_t
UA_CncOperationMode_calcSizeBinary(const UA_CncOperationMode *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_NC[UA_TYPES_NC_CNCOPERATIONMODE]);
}
static UA_INLINE UA_StatusCode
UA_CncOperationMode_encodeBinary(const UA_CncOperationMode *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_NC[UA_TYPES_NC_CNCOPERATIONMODE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CncOperationMode_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CncOperationMode *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_NC[UA_TYPES_NC_CNCOPERATIONMODE], NULL);
}

/* CncSpindleTurnDirection */
static UA_INLINE size_t
UA_CncSpindleTurnDirection_calcSizeBinary(const UA_CncSpindleTurnDirection *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_NC[UA_TYPES_NC_CNCSPINDLETURNDIRECTION]);
}
static UA_INLINE UA_StatusCode
UA_CncSpindleTurnDirection_encodeBinary(const UA_CncSpindleTurnDirection *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_NC[UA_TYPES_NC_CNCSPINDLETURNDIRECTION], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CncSpindleTurnDirection_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CncSpindleTurnDirection *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_NC[UA_TYPES_NC_CNCSPINDLETURNDIRECTION], NULL);
}

/* CncAxisStatus */
static UA_INLINE size_t
UA_CncAxisStatus_calcSizeBinary(const UA_CncAxisStatus *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_NC[UA_TYPES_NC_CNCAXISSTATUS]);
}
static UA_INLINE UA_StatusCode
UA_CncAxisStatus_encodeBinary(const UA_CncAxisStatus *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_NC[UA_TYPES_NC_CNCAXISSTATUS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CncAxisStatus_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CncAxisStatus *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_NC[UA_TYPES_NC_CNCAXISSTATUS], NULL);
}

/* CncSpindleStatus */
static UA_INLINE size_t
UA_CncSpindleStatus_calcSizeBinary(const UA_CncSpindleStatus *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_NC[UA_TYPES_NC_CNCSPINDLESTATUS]);
}
static UA_INLINE UA_StatusCode
UA_CncSpindleStatus_encodeBinary(const UA_CncSpindleStatus *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_NC[UA_TYPES_NC_CNCSPINDLESTATUS], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CncSpindleStatus_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CncSpindleStatus *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_NC[UA_TYPES_NC_CNCSPINDLESTATUS], NULL);
}

#endif /* TYPES_NC_GENERATED_ENCODING_BINARY_H_ */
