/****************************************************************************
 *
 * Copyright 2021 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/
#pragma once

#include <debug.h>

#define NET_LOG(tag, fmt, args...)				\
	nwdbg(fmt, ##args)
#define NET_LOGE(tag, fmt, args...)				\
	ndbg("%d "tag "[ERR]\t"fmt, __LINE__, ##args)
#define NET_LOGI(tag, fmt, args...)					\
	nwdbg("%d "tag "[INFO]\t"fmt, __LINE__, ##args)
#define NET_LOGV(tag, fmt, args...)					\
	nvdbg("%d "tag "[VERB]\t"fmt, __LINE__, ##args)


