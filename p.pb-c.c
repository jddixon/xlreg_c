/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: p.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "p.pb-c.h"
void   xlreg__xlreg_msg__token__init
                     (Xlreg__XLRegMsg__Token         *message)
{
  static Xlreg__XLRegMsg__Token init_value = XLREG__XLREG_MSG__TOKEN__INIT;
  *message = init_value;
}
void   xlreg__xlreg_msg__init
                     (Xlreg__XLRegMsg         *message)
{
  static Xlreg__XLRegMsg init_value = XLREG__XLREG_MSG__INIT;
  *message = init_value;
}
size_t xlreg__xlreg_msg__get_packed_size
                     (const Xlreg__XLRegMsg *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &xlreg__xlreg_msg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t xlreg__xlreg_msg__pack
                     (const Xlreg__XLRegMsg *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &xlreg__xlreg_msg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t xlreg__xlreg_msg__pack_to_buffer
                     (const Xlreg__XLRegMsg *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &xlreg__xlreg_msg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Xlreg__XLRegMsg *
       xlreg__xlreg_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Xlreg__XLRegMsg *)
     protobuf_c_message_unpack (&xlreg__xlreg_msg__descriptor,
                                allocator, len, data);
}
void   xlreg__xlreg_msg__free_unpacked
                     (Xlreg__XLRegMsg *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &xlreg__xlreg_msg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor xlreg__xlreg_msg__token__field_descriptors[7] =
{
  {
    "Name",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg__Token, name),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Attrs",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg__Token, has_attrs),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg__Token, attrs),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ID",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg__Token, has_id),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg__Token, id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CommsKey",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg__Token, has_commskey),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg__Token, commskey),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "SigKey",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg__Token, has_sigkey),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg__Token, sigkey),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "MyEnds",
    6,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg__Token, n_myends),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg__Token, myends),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "DigSig",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg__Token, has_digsig),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg__Token, digsig),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned xlreg__xlreg_msg__token__field_indices_by_name[] = {
  1,   /* field[1] = Attrs */
  3,   /* field[3] = CommsKey */
  6,   /* field[6] = DigSig */
  2,   /* field[2] = ID */
  5,   /* field[5] = MyEnds */
  0,   /* field[0] = Name */
  4,   /* field[4] = SigKey */
};
static const ProtobufCIntRange xlreg__xlreg_msg__token__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 7 }
};
const ProtobufCMessageDescriptor xlreg__xlreg_msg__token__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "xlreg.XLRegMsg.Token",
  "Token",
  "Xlreg__XLRegMsg__Token",
  "xlreg",
  sizeof(Xlreg__XLRegMsg__Token),
  7,
  xlreg__xlreg_msg__token__field_descriptors,
  xlreg__xlreg_msg__token__field_indices_by_name,
  1,  xlreg__xlreg_msg__token__number_ranges,
  (ProtobufCMessageInit) xlreg__xlreg_msg__token__init,
  NULL,NULL,NULL    /* reserved[123] */
};
const ProtobufCEnumValue xlreg__xlreg_msg__tag__enum_values_by_number[13] =
{
  { "RegCredRequest", "XLREG__XLREG_MSG__TAG__REGCREDREQUEST", 1 },
  { "RegCredReply", "XLREG__XLREG_MSG__TAG__REGCREDREPLY", 2 },
  { "Client", "XLREG__XLREG_MSG__TAG__CLIENT", 3 },
  { "ClientOK", "XLREG__XLREG_MSG__TAG__CLIENTOK", 4 },
  { "Create", "XLREG__XLREG_MSG__TAG__CREATE", 5 },
  { "CreateReply", "XLREG__XLREG_MSG__TAG__CREATEREPLY", 6 },
  { "Join", "XLREG__XLREG_MSG__TAG__JOIN", 7 },
  { "JoinReply", "XLREG__XLREG_MSG__TAG__JOINREPLY", 8 },
  { "GetCluster", "XLREG__XLREG_MSG__TAG__GETCLUSTER", 9 },
  { "ClusterMembers", "XLREG__XLREG_MSG__TAG__CLUSTERMEMBERS", 10 },
  { "Bye", "XLREG__XLREG_MSG__TAG__BYE", 11 },
  { "Ack", "XLREG__XLREG_MSG__TAG__ACK", 12 },
  { "Error", "XLREG__XLREG_MSG__TAG__ERROR", 13 },
};
static const ProtobufCIntRange xlreg__xlreg_msg__tag__value_ranges[] = {
{1, 0},{0, 13}
};
const ProtobufCEnumValueIndex xlreg__xlreg_msg__tag__enum_values_by_name[13] =
{
  { "Ack", 11 },
  { "Bye", 10 },
  { "Client", 2 },
  { "ClientOK", 3 },
  { "ClusterMembers", 9 },
  { "Create", 4 },
  { "CreateReply", 5 },
  { "Error", 12 },
  { "GetCluster", 8 },
  { "Join", 6 },
  { "JoinReply", 7 },
  { "RegCredReply", 1 },
  { "RegCredRequest", 0 },
};
const ProtobufCEnumDescriptor xlreg__xlreg_msg__tag__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "xlreg.XLRegMsg.Tag",
  "Tag",
  "Xlreg__XLRegMsg__Tag",
  "xlreg",
  13,
  xlreg__xlreg_msg__tag__enum_values_by_number,
  13,
  xlreg__xlreg_msg__tag__enum_values_by_name,
  1,
  xlreg__xlreg_msg__tag__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor xlreg__xlreg_msg__field_descriptors[19] =
{
  {
    "Op",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, has_op),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, op),
    &xlreg__xlreg_msg__tag__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "AesIV",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, has_aesiv),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, aesiv),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "AesKey",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, has_aeskey),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, aeskey),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Salt1",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, has_salt1),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, salt1),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Salt2",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, has_salt2),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, salt2),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Version",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, has_version),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, version),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ClientName",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, clientname),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ClientID",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, has_clientid),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, clientid),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ClientAttrs",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, has_clientattrs),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, clientattrs),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ClientSpecs",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, clientspecs),
    &xlreg__xlreg_msg__token__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ClusterID",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, has_clusterid),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, clusterid),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ClusterName",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, clustername),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ClusterSize",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, has_clustersize),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, clustersize),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ClusterAttrs",
    16,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, has_clusterattrs),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, clusterattrs),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "EndPointCount",
    17,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, has_endpointcount),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, endpointcount),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Which",
    20,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, has_which),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, which),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Tokens",
    21,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, n_tokens),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, tokens),
    &xlreg__xlreg_msg__token__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "DigSig",
    22,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, has_digsig),
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, digsig),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ErrDesc",
    23,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Xlreg__XLRegMsg, errdesc),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned xlreg__xlreg_msg__field_indices_by_name[] = {
  1,   /* field[1] = AesIV */
  2,   /* field[2] = AesKey */
  8,   /* field[8] = ClientAttrs */
  7,   /* field[7] = ClientID */
  6,   /* field[6] = ClientName */
  9,   /* field[9] = ClientSpecs */
  13,   /* field[13] = ClusterAttrs */
  10,   /* field[10] = ClusterID */
  11,   /* field[11] = ClusterName */
  12,   /* field[12] = ClusterSize */
  17,   /* field[17] = DigSig */
  14,   /* field[14] = EndPointCount */
  18,   /* field[18] = ErrDesc */
  0,   /* field[0] = Op */
  3,   /* field[3] = Salt1 */
  4,   /* field[4] = Salt2 */
  16,   /* field[16] = Tokens */
  5,   /* field[5] = Version */
  15,   /* field[15] = Which */
};
static const ProtobufCIntRange xlreg__xlreg_msg__number_ranges[4 + 1] =
{
  { 1, 0 },
  { 8, 6 },
  { 13, 10 },
  { 20, 15 },
  { 0, 19 }
};
const ProtobufCMessageDescriptor xlreg__xlreg_msg__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "xlreg.XLRegMsg",
  "XLRegMsg",
  "Xlreg__XLRegMsg",
  "xlreg",
  sizeof(Xlreg__XLRegMsg),
  19,
  xlreg__xlreg_msg__field_descriptors,
  xlreg__xlreg_msg__field_indices_by_name,
  4,  xlreg__xlreg_msg__number_ranges,
  (ProtobufCMessageInit) xlreg__xlreg_msg__init,
  NULL,NULL,NULL    /* reserved[123] */
};