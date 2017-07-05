/* Copyright 2017 Samsung Electronics All Rights Reserved.
 *
 *
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************/

/**
 * This file contains the declaration of classes and its members related to
 * RemoteScannerDevice.
 */

#ifndef SMARTHOME_API_CLIENT_REMOTESCANNER_H_
#define SMARTHOME_API_CLIENT_REMOTESCANNER_H_

#include <SHBaseRemoteDevice.h>
#include <RemoteBinarySwitchResource.h>
#include <RemoteOperationalStateResource.h>
#include <RemoteAutomaticDocumentFeederResource.h>

namespace OIC
{
    namespace Service
    {
        namespace SH
        {
            /**
             * This class contains a set of functions to control remote scanner device.
             */
            class RemoteScannerDevice: public SHBaseRemoteDevice
            {
            public:
                RemoteScannerDevice();
                virtual ~RemoteScannerDevice();

            public:
                RemoteBinarySwitchResource *m_binarySwitch;
                RemoteOperationalStateResource *m_operationalState;
                RemoteAutomaticDocumentFeederResource *m_automaticDocumentFeeder;
            };
        }
    }
}

#endif /* SMARTHOME_API_CLIENT_REMOTESCANNER_H_ */
