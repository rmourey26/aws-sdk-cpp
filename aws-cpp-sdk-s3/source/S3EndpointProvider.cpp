﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/S3EndpointProvider.h>

namespace Aws
{
namespace S3
{
namespace Endpoint
{
  void S3ClientContextParameters::SetForcePathStyle(bool value)
  {
    return SetBooleanParameter(Aws::String("ForcePathStyle"), value);
  }
  const S3ClientContextParameters::ClientContextParameters::EndpointParameter& S3ClientContextParameters::GetForcePathStyle() const
  {
    return GetParameter("ForcePathStyle");
  }
  void S3ClientContextParameters::SetDisableMultiRegionAccessPoints(bool value)
  {
    return SetBooleanParameter(Aws::String("DisableMultiRegionAccessPoints"), value);
  }
  const S3ClientContextParameters::ClientContextParameters::EndpointParameter& S3ClientContextParameters::GetDisableMultiRegionAccessPoints() const
  {
    return GetParameter("DisableMultiRegionAccessPoints");
  }
  void S3ClientContextParameters::SetUseArnRegion(bool value)
  {
    return SetBooleanParameter(Aws::String("UseArnRegion"), value);
  }
  const S3ClientContextParameters::ClientContextParameters::EndpointParameter& S3ClientContextParameters::GetUseArnRegion() const
  {
    return GetParameter("UseArnRegion");
  }
  void S3ClientContextParameters::SetAccelerate(bool value)
  {
    return SetBooleanParameter(Aws::String("Accelerate"), value);
  }
  const S3ClientContextParameters::ClientContextParameters::EndpointParameter& S3ClientContextParameters::GetAccelerate() const
  {
    return GetParameter("Accelerate");
  }
  void S3BuiltInParameters::SetFromClientConfiguration(const S3ClientConfiguration& config)
  {
    SetFromClientConfiguration(static_cast<const S3ClientConfiguration::BaseClientConfigClass&>(config));

    static const Aws::String AWS_S3_USE_GLOBAL_ENDPOINT = "UseGlobalEndpoint";
    if (config.useUSEast1RegionalEndPointOption == US_EAST_1_REGIONAL_ENDPOINT_OPTION::LEGACY) {
      SetBooleanParameter(AWS_S3_USE_GLOBAL_ENDPOINT, true);
    }

    // Not supported by this SDK:
    // static const Aws::String AWS_S3_ACCELERATE = "Accelerate";
    // static const Aws::String AWS_S3_FORCE_PATH_STYLE = "ForcePathStyle";

    static const Aws::String AWS_S3_USE_ARN_REGION = "UseArnRegion";
    SetBooleanParameter(AWS_S3_USE_ARN_REGION, config.useArnRegion);

    static const Aws::String AWS_S3_DISABLE_MRAP = "DisableMultiRegionAccessPoints";
    SetBooleanParameter(AWS_S3_DISABLE_MRAP, config.disableMultiRegionAccessPoints);

    static const Aws::String AWS_S3_FORCE_PATH_STYLE = "ForcePathStyle";
    if (!config.useVirtualAddressing) {
      SetBooleanParameter(AWS_S3_FORCE_PATH_STYLE, true);
    }
  }
} // namespace Endpoint
} // namespace S3
} // namespace Aws
