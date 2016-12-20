/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef backup_interface_TYPES_H
#define backup_interface_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>




struct Operation {
  enum type {
    ADD_NODE = 1,
    REMOVE_NODE = 2,
    ADD_EDGE = 3,
    REMOVE_EDGE = 4,
    GET_NODE = 5
  };
};

extern const std::map<int, const char*> _Operation_VALUES_TO_NAMES;



#endif
