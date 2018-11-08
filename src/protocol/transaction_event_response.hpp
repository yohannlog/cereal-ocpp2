#pragma once

/**
*
* This file is auto generated using this exact command:
*     ../../generator/scripts/schema-to-cpp-header2.py
*     --input-dir=../../schemas/schemas
*     --namespace=lgpl3
*     --namespace=ocpp20
*     --include=<cereal/types/vector.hpp>
*     --include="../cereal/cereal_ext.hpp"
*     --include="../cereal/schema_enum.hpp"
*     --include="../cereal/schema_string.hpp"
*
*/

#include <cereal/types/vector.hpp>
#include "../cereal/cereal_ext.hpp"
#include "../cereal/schema_enum.hpp"
#include "../cereal/schema_string.hpp"
#include <vector>
#include "./common.hpp"

namespace lgpl3 { namespace ocpp20 { 

struct TransactionEventResponse
{
    optional<int> chargingPriority;
    optional<IdTokenInfoType> idTokenInfo;
    optional<double> totalCost;
    optional<MessageContentType> updatedPersonalMessage;

    template<typename Archive>
    void serialize(Archive& archive)
    {
        cereal::nvp(archive, "chargingPriority", chargingPriority);
        cereal::nvp(archive, "idTokenInfo", idTokenInfo);
        cereal::nvp(archive, "totalCost", totalCost);
        cereal::nvp(archive, "updatedPersonalMessage", updatedPersonalMessage);
    }
};



} } 

