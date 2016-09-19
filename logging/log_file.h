// Copyright 2016 LINE Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef STELLITE_LOGGING_LOG_FILE_H_
#define STELLITE_LOGGING_LOG_FILE_H_

#include "net/base/completion_callback.h"

namespace stellite {

class LogFile {
 public:
  virtual ~LogFile() {}

  virtual int Open() = 0;

  virtual void Close() = 0;

  virtual int Write(const char* buf,
                    size_t buf_len,
                    const net::CompletionCallback& callback) = 0;
};

} // namespace stellite

#endif
