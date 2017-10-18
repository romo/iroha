/**
 * Copyright Soramitsu Co., Ltd. 2017 All Rights Reserved.
 * http://soramitsu.co.jp
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IROHA_FLAGS_HPP_
#define IROHA_FLAGS_HPP_

#include <gflags/gflags.h>

/**
 * It is safe to include this file anywhere for flag usage. Don't forget to link
 * `irohad-flags` to your target.
 *
 * However, it is not recommended to use flags. Use iroha::config::Config.
 */

/// -new_ledger
DECLARE_bool(create);
DECLARE_string(genesis_block);

/// Redis
DECLARE_string(redis_host);
DECLARE_int32(redis_port);

/// PostgreSQL host and port, username and password
DECLARE_string(postgres_host);
DECLARE_int32(postgres_port);
DECLARE_string(postgres_username);

// postgres password
DECLARE_string(postgres_password);

/// Keypair
DECLARE_string(public_key);
DECLARE_string(private_key);

/// BlockStorage
DECLARE_string(dbpath);

/// Torii
DECLARE_string(torii_host);
DECLARE_int32(torii_port);

#endif  // IROHA_FLAGS_HPP_
