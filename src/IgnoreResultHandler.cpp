/***
   mockcpp is a C/C++ mock framework.
   Copyright [2008] [Darwin Yuan <darwin.yuan@gmail.com>]

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
***/

#include <mockcpp/IgnoreResultHandler.h>
#include <mockcpp/Ignore.h>
#include <mockcpp/types/Any.h>
#include <mockcpp/types/AnyCast.h>

MOCKCPP_NS_START

bool IgnoreResultHandler::matches(const Any& val) const
{
   return any_castable<Ignore>(val);
}

const Any& IgnoreResultHandler::getResult(const Any& val) const
{
	return val;
}

MOCKCPP_NS_END

