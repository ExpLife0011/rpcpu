/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ss.proto */

#ifndef PROTOBUF_C_ss_2eproto__INCLUDED
#define PROTOBUF_C_ss_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _RpcRequest RpcRequest;
typedef struct _RpcResponse RpcResponse;
typedef struct _Test1 Test1;
typedef struct _Test2 Test2;


/* --- enums --- */


/* --- messages --- */

struct  _RpcRequest
{
  ProtobufCMessage base;
  char *service;
  int32_t request;
  int32_t id;
};
#define RPC_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpc_request__descriptor) \
    , NULL, 0, 0 }


struct  _RpcResponse
{
  ProtobufCMessage base;
  int32_t id;
};
#define RPC_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpc_response__descriptor) \
    , 0 }


struct  _Test1
{
  ProtobufCMessage base;
  int32_t id;
  char *value;
};
#define TEST1__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&test1__descriptor) \
    , 0, NULL }


struct  _Test2
{
  ProtobufCMessage base;
  int32_t id;
  char *value;
};
#define TEST2__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&test2__descriptor) \
    , 0, NULL }


/* RpcRequest methods */
void   rpc_request__init
                     (RpcRequest         *message);
size_t rpc_request__get_packed_size
                     (const RpcRequest   *message);
size_t rpc_request__pack
                     (const RpcRequest   *message,
                      uint8_t             *out);
size_t rpc_request__pack_to_buffer
                     (const RpcRequest   *message,
                      ProtobufCBuffer     *buffer);
RpcRequest *
       rpc_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpc_request__free_unpacked
                     (RpcRequest *message,
                      ProtobufCAllocator *allocator);
/* RpcResponse methods */
void   rpc_response__init
                     (RpcResponse         *message);
size_t rpc_response__get_packed_size
                     (const RpcResponse   *message);
size_t rpc_response__pack
                     (const RpcResponse   *message,
                      uint8_t             *out);
size_t rpc_response__pack_to_buffer
                     (const RpcResponse   *message,
                      ProtobufCBuffer     *buffer);
RpcResponse *
       rpc_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpc_response__free_unpacked
                     (RpcResponse *message,
                      ProtobufCAllocator *allocator);
/* Test1 methods */
void   test1__init
                     (Test1         *message);
size_t test1__get_packed_size
                     (const Test1   *message);
size_t test1__pack
                     (const Test1   *message,
                      uint8_t             *out);
size_t test1__pack_to_buffer
                     (const Test1   *message,
                      ProtobufCBuffer     *buffer);
Test1 *
       test1__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   test1__free_unpacked
                     (Test1 *message,
                      ProtobufCAllocator *allocator);
/* Test2 methods */
void   test2__init
                     (Test2         *message);
size_t test2__get_packed_size
                     (const Test2   *message);
size_t test2__pack
                     (const Test2   *message,
                      uint8_t             *out);
size_t test2__pack_to_buffer
                     (const Test2   *message,
                      ProtobufCBuffer     *buffer);
Test2 *
       test2__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   test2__free_unpacked
                     (Test2 *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*RpcRequest_Closure)
                 (const RpcRequest *message,
                  void *closure_data);
typedef void (*RpcResponse_Closure)
                 (const RpcResponse *message,
                  void *closure_data);
typedef void (*Test1_Closure)
                 (const Test1 *message,
                  void *closure_data);
typedef void (*Test2_Closure)
                 (const Test2 *message,
                  void *closure_data);

/* --- services --- */

typedef struct _RpcTest_Service RpcTest_Service;
struct _RpcTest_Service
{
  ProtobufCService base;
  void (*get_test)(RpcTest_Service *service,
                   const Test1 *input,
                   Test2_Closure closure,
                   void *closure_data);
};
typedef void (*RpcTest_ServiceDestroy)(RpcTest_Service *);
void rpc_test__init (RpcTest_Service *service,
                     RpcTest_ServiceDestroy destroy);
#define RPC_TEST__BASE_INIT \
    { &rpc_test__descriptor, protobuf_c_service_invoke_internal, NULL }
#define RPC_TEST__INIT(function_prefix__) \
    { RPC_TEST__BASE_INIT,\
      function_prefix__ ## get_test  }
void rpc_test__get_test(ProtobufCService *service,
                        const Test1 *input,
                        Test2_Closure closure,
                        void *closure_data);

/* --- descriptors --- */

extern const ProtobufCMessageDescriptor rpc_request__descriptor;
extern const ProtobufCMessageDescriptor rpc_response__descriptor;
extern const ProtobufCMessageDescriptor test1__descriptor;
extern const ProtobufCMessageDescriptor test2__descriptor;
extern const ProtobufCServiceDescriptor rpc_test__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_ss_2eproto__INCLUDED */