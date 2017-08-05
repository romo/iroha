# What is Hyperledger Iroha?

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)
[![CII Best Practices](https://bestpractices.coreinfrastructure.org/projects/960/badge)](https://bestpractices.coreinfrastructure.org/projects/960)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/4d8edb74d4954c76a4656a9e109dbc4e)](https://www.codacy.com/app/neewy/iroha?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=hyperledger/iroha&amp;utm_campaign=Badge_Grade)
[![CircleCI](https://circleci.com/gh/hyperledger/iroha/tree/master.svg?style=svg)](https://circleci.com/gh/hyperledger/iroha/tree/master)

Blockchain platform Hyperledger Iroha is designed for simple creation and management of assets. This is a distributed ledger of transactions.

<img height="300px" src="docs/Iroha_3_sm.png"
 alt="Iroha logo" title="Iroha" align="right" />

Among features of the system are the following groups:
1. Creation and management of custom complex assets, such as currency or indivisible rights, serial numbers, patents, etc.
2. Management of user accounts
3. Taxonomy of accounts based on _domains_ — or _sub-ledgers_ in the system
4. The system of rights and verification of user permissions for the execution of transactions and queries in the system
5. Validation of business rules for transactions and queries in the system


Among the non-functional requirements can be noted a high degree of network fault tolerance _(Byzantine Fault Tolerant)_.

## Current Status

Iroha v0.95 preview version is released on [TBD].


## Iroha repository 101

System runs as a daemon, representing single peer in Iroha network. For each peer there is following package structure, corresponding to components of the system:

* *Torii* (gate) is a package that contains classes, which are in charge of interaction with users (clients)
* *Network* encompasses interaction in network of peers
* *Validation* classes check business rules and validity (right format) of transactions or queries
* *Synchronizer* helps to sync newcomer peers or temporary disconnected peers
* *Simulator* generates temporary snapshot of storage to validate transactions
* *Ametsuchi* is ledger block storage
* *Model* classes are system entities, and converters for them

<br>

For other components and more explanation please take a look at *technical and design docs.*

## Quickstart

### Docker

You may use docker ennvironment to build and run the system. Execute the following:

```
git clone https://github.com/hyperledger/iroha.git
sh iroha/docker/run-ametsuchi-dev.sh
```

After that, container will run in interactive mode. So, you can run any IDE or editor on your local environment, while building the system in docker environment

### Build

To build the system, execute the the following:

```
cmake -H. -Bbuild; cmake --build build -- -j4;
```

Consider executing ``` git clean -ix``` and choosing `c` option when you want to rebuild the system (to clean up generated protobuf code).
Also, use `--clean-first` flag for rebuild.

### Test

`[TBD]`.

## Find out more

| Technical docs | Guides | Contributing |
|---|---|---|
|[![Technical docs](docs/icons/docs.png)](http://google.com/)| [![How-to](docs/icons/how-to.png)](http://google.com/) |[![Contributing](docs/icons/contributing.png)](http://google.com/)|

## Need help?

* Join [HyperLedger RocketChat](https://chat.hyperledger.org) #iroha channel to discuss your concerns and proposals
* Use mailing list to spread your word within Iroha development community [hyperledger-iroha@lists.hyperledger.org](mailto:hyperledger-iroha@lists.hyperledger.org)
* Submit issues via GitHub Iroha repository
* Communicate in Gitter chat with our development community [![Join the chat at https://gitter.im/hyperledger-iroha/Lobby](https://badges.gitter.im/hyperledger-iroha/Lobby.svg)](https://gitter.im/hyperledger-iroha/Lobby?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)


## License

Copyright 2016, 2017 Soramitsu Co., Ltd.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
