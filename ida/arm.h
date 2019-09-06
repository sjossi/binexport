// Copyright 2011-2019 Google LLC. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef IDA_ARM_H_
#define IDA_ARM_H_

#include "third_party/zynamics/binexport/call_graph.h"
#include "third_party/zynamics/binexport/flow_graph.h"
#include "third_party/zynamics/binexport/instruction.h"
#include "third_party/zynamics/binexport/type_system.h"
#include "third_party/zynamics/binexport/types.h"

class insn_t;

namespace security {
namespace binexport {

Instruction ParseInstructionIdaArm(const insn_t& instruction,
                                   CallGraph* call_graph, FlowGraph* flow_graph,
                                   TypeSystem* type_system);

}  // namespace binexport
}  // namespace security

#endif  // IDA_ARM_H_
