/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef BackupService_H
#define BackupService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "backup_interface_types.h"



#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class BackupServiceIf {
 public:
  virtual ~BackupServiceIf() {}
  virtual int64_t backup(const Operation::type op, const int64_t param1, const int64_t param2) = 0;
};

class BackupServiceIfFactory {
 public:
  typedef BackupServiceIf Handler;

  virtual ~BackupServiceIfFactory() {}

  virtual BackupServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(BackupServiceIf* /* handler */) = 0;
};

class BackupServiceIfSingletonFactory : virtual public BackupServiceIfFactory {
 public:
  BackupServiceIfSingletonFactory(const boost::shared_ptr<BackupServiceIf>& iface) : iface_(iface) {}
  virtual ~BackupServiceIfSingletonFactory() {}

  virtual BackupServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(BackupServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<BackupServiceIf> iface_;
};

class BackupServiceNull : virtual public BackupServiceIf {
 public:
  virtual ~BackupServiceNull() {}
  int64_t backup(const Operation::type /* op */, const int64_t /* param1 */, const int64_t /* param2 */) {
    int64_t _return = 0;
    return _return;
  }
};

typedef struct _BackupService_backup_args__isset {
  _BackupService_backup_args__isset() : op(false), param1(false), param2(true) {}
  bool op :1;
  bool param1 :1;
  bool param2 :1;
} _BackupService_backup_args__isset;

class BackupService_backup_args {
 public:

  BackupService_backup_args(const BackupService_backup_args&);
  BackupService_backup_args& operator=(const BackupService_backup_args&);
  BackupService_backup_args() : op((Operation::type)0), param1(0), param2(-1LL) {
  }

  virtual ~BackupService_backup_args() throw();
  Operation::type op;
  int64_t param1;
  int64_t param2;

  _BackupService_backup_args__isset __isset;

  void __set_op(const Operation::type val);

  void __set_param1(const int64_t val);

  void __set_param2(const int64_t val);

  bool operator == (const BackupService_backup_args & rhs) const
  {
    if (!(op == rhs.op))
      return false;
    if (!(param1 == rhs.param1))
      return false;
    if (!(param2 == rhs.param2))
      return false;
    return true;
  }
  bool operator != (const BackupService_backup_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const BackupService_backup_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class BackupService_backup_pargs {
 public:


  virtual ~BackupService_backup_pargs() throw();
  const Operation::type* op;
  const int64_t* param1;
  const int64_t* param2;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _BackupService_backup_result__isset {
  _BackupService_backup_result__isset() : success(false) {}
  bool success :1;
} _BackupService_backup_result__isset;

class BackupService_backup_result {
 public:

  BackupService_backup_result(const BackupService_backup_result&);
  BackupService_backup_result& operator=(const BackupService_backup_result&);
  BackupService_backup_result() : success(0) {
  }

  virtual ~BackupService_backup_result() throw();
  int64_t success;

  _BackupService_backup_result__isset __isset;

  void __set_success(const int64_t val);

  bool operator == (const BackupService_backup_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const BackupService_backup_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const BackupService_backup_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _BackupService_backup_presult__isset {
  _BackupService_backup_presult__isset() : success(false) {}
  bool success :1;
} _BackupService_backup_presult__isset;

class BackupService_backup_presult {
 public:


  virtual ~BackupService_backup_presult() throw();
  int64_t* success;

  _BackupService_backup_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class BackupServiceClient : virtual public BackupServiceIf {
 public:
  BackupServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  BackupServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  int64_t backup(const Operation::type op, const int64_t param1, const int64_t param2);
  void send_backup(const Operation::type op, const int64_t param1, const int64_t param2);
  int64_t recv_backup();
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class BackupServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<BackupServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (BackupServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_backup(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  BackupServiceProcessor(boost::shared_ptr<BackupServiceIf> iface) :
    iface_(iface) {
    processMap_["backup"] = &BackupServiceProcessor::process_backup;
  }

  virtual ~BackupServiceProcessor() {}
};

class BackupServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  BackupServiceProcessorFactory(const ::boost::shared_ptr< BackupServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< BackupServiceIfFactory > handlerFactory_;
};

class BackupServiceMultiface : virtual public BackupServiceIf {
 public:
  BackupServiceMultiface(std::vector<boost::shared_ptr<BackupServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~BackupServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<BackupServiceIf> > ifaces_;
  BackupServiceMultiface() {}
  void add(boost::shared_ptr<BackupServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  int64_t backup(const Operation::type op, const int64_t param1, const int64_t param2) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->backup(op, param1, param2);
    }
    return ifaces_[i]->backup(op, param1, param2);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class BackupServiceConcurrentClient : virtual public BackupServiceIf {
 public:
  BackupServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  BackupServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  int64_t backup(const Operation::type op, const int64_t param1, const int64_t param2);
  int32_t send_backup(const Operation::type op, const int64_t param1, const int64_t param2);
  int64_t recv_backup(const int32_t seqid);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif



#endif
