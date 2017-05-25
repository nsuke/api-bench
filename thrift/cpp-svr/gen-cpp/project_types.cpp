/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "project_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace OpenSourceProjects {


Date::~Date() throw() {
}


void Date::__set_year(const int16_t val) {
  this->year = val;
}

void Date::__set_month(const int16_t val) {
  this->month = val;
}

void Date::__set_day(const int16_t val) {
  this->day = val;
}

uint32_t Date::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->year);
          this->__isset.year = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->month);
          this->__isset.month = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->day);
          this->__isset.day = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Date::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Date");

  xfer += oprot->writeFieldBegin("year", ::apache::thrift::protocol::T_I16, 1);
  xfer += oprot->writeI16(this->year);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("month", ::apache::thrift::protocol::T_I16, 2);
  xfer += oprot->writeI16(this->month);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("day", ::apache::thrift::protocol::T_I16, 3);
  xfer += oprot->writeI16(this->day);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Date &a, Date &b) {
  using ::std::swap;
  swap(a.year, b.year);
  swap(a.month, b.month);
  swap(a.day, b.day);
  swap(a.__isset, b.__isset);
}

Date::Date(const Date& other0) {
  year = other0.year;
  month = other0.month;
  day = other0.day;
  __isset = other0.__isset;
}
Date& Date::operator=(const Date& other1) {
  year = other1.year;
  month = other1.month;
  day = other1.day;
  __isset = other1.__isset;
  return *this;
}
void Date::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Date(";
  out << "year=" << to_string(year);
  out << ", " << "month=" << to_string(month);
  out << ", " << "day=" << to_string(day);
  out << ")";
}


Project::~Project() throw() {
}


void Project::__set_name(const std::string& val) {
  this->name = val;
}

void Project::__set_host(const std::string& val) {
  this->host = val;
}

void Project::__set_inception(const Date& val) {
  this->inception = val;
}

uint32_t Project::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->host);
          this->__isset.host = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->inception.read(iprot);
          this->__isset.inception = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Project::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Project");

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("host", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->host);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("inception", ::apache::thrift::protocol::T_STRUCT, 3);
  xfer += this->inception.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Project &a, Project &b) {
  using ::std::swap;
  swap(a.name, b.name);
  swap(a.host, b.host);
  swap(a.inception, b.inception);
  swap(a.__isset, b.__isset);
}

Project::Project(const Project& other2) {
  name = other2.name;
  host = other2.host;
  inception = other2.inception;
  __isset = other2.__isset;
}
Project& Project::operator=(const Project& other3) {
  name = other3.name;
  host = other3.host;
  inception = other3.inception;
  __isset = other3.__isset;
  return *this;
}
void Project::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Project(";
  out << "name=" << to_string(name);
  out << ", " << "host=" << to_string(host);
  out << ", " << "inception=" << to_string(inception);
  out << ")";
}


CreateResult::~CreateResult() throw() {
}


void CreateResult::__set_code(const int16_t val) {
  this->code = val;
}

void CreateResult::__set_message(const std::string& val) {
  this->message = val;
}

uint32_t CreateResult::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->code);
          this->__isset.code = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CreateResult::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("CreateResult");

  xfer += oprot->writeFieldBegin("code", ::apache::thrift::protocol::T_I16, 1);
  xfer += oprot->writeI16(this->code);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(CreateResult &a, CreateResult &b) {
  using ::std::swap;
  swap(a.code, b.code);
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

CreateResult::CreateResult(const CreateResult& other4) {
  code = other4.code;
  message = other4.message;
  __isset = other4.__isset;
}
CreateResult& CreateResult::operator=(const CreateResult& other5) {
  code = other5.code;
  message = other5.message;
  __isset = other5.__isset;
  return *this;
}
void CreateResult::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "CreateResult(";
  out << "code=" << to_string(code);
  out << ", " << "message=" << to_string(message);
  out << ")";
}

} // namespace