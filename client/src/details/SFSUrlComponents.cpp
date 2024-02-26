// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#include "SFSUrlComponents.h"

using namespace SFS::details;

std::string SFSUrlComponents::GetLatestVersionUrl(const std::string& baseUrl,
                                                  const std::string& instanceId,
                                                  const std::string& nameSpace,
                                                  const std::string& product)
{
    return baseUrl + "/api/v2/contents/" + instanceId + "/namespaces/" + nameSpace + "/names/" + product +
           "/versions/latest?action=select";
}

std::string SFSUrlComponents::GetLatestVersionBatchUrl(const std::string& baseUrl,
                                                       const std::string& instanceId,
                                                       const std::string& nameSpace)
{
    return baseUrl + "/api/v2/contents/" + instanceId + "/namespaces/" + nameSpace + "/names?action=BatchUpdates";
}

std::string SFSUrlComponents::GetSpecificVersionUrl(const std::string& baseUrl,
                                                    const std::string& instanceId,
                                                    const std::string& nameSpace,
                                                    const std::string& product,
                                                    const std::string& version)
{
    return baseUrl + "/api/v1/contents/" + instanceId + "/namespaces/" + nameSpace + "/names/" + product +
           "/versions/" + version;
}

std::string SFSUrlComponents::GetDownloadInfoUrl(const std::string& baseUrl,
                                                 const std::string& instanceId,
                                                 const std::string& nameSpace,
                                                 const std::string& product,
                                                 const std::string& version)
{
    return baseUrl + "/api/v1/contents/" + instanceId + "/namespaces/" + nameSpace + "/names/" + product +
           "/versions/" + version + "/files?action=GenerateDownloadInfo";
}