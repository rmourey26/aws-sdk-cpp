﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/HttpPackageConfiguration.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class AWS_MEDIATAILOR_API UpdateLiveSourceRequest : public MediaTailorRequest
  {
  public:
    UpdateLiveSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLiveSource"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A list of HTTP package configurations for the live source on this
     * account.</p>
     */
    inline const Aws::Vector<HttpPackageConfiguration>& GetHttpPackageConfigurations() const{ return m_httpPackageConfigurations; }

    /**
     * <p>A list of HTTP package configurations for the live source on this
     * account.</p>
     */
    inline bool HttpPackageConfigurationsHasBeenSet() const { return m_httpPackageConfigurationsHasBeenSet; }

    /**
     * <p>A list of HTTP package configurations for the live source on this
     * account.</p>
     */
    inline void SetHttpPackageConfigurations(const Aws::Vector<HttpPackageConfiguration>& value) { m_httpPackageConfigurationsHasBeenSet = true; m_httpPackageConfigurations = value; }

    /**
     * <p>A list of HTTP package configurations for the live source on this
     * account.</p>
     */
    inline void SetHttpPackageConfigurations(Aws::Vector<HttpPackageConfiguration>&& value) { m_httpPackageConfigurationsHasBeenSet = true; m_httpPackageConfigurations = std::move(value); }

    /**
     * <p>A list of HTTP package configurations for the live source on this
     * account.</p>
     */
    inline UpdateLiveSourceRequest& WithHttpPackageConfigurations(const Aws::Vector<HttpPackageConfiguration>& value) { SetHttpPackageConfigurations(value); return *this;}

    /**
     * <p>A list of HTTP package configurations for the live source on this
     * account.</p>
     */
    inline UpdateLiveSourceRequest& WithHttpPackageConfigurations(Aws::Vector<HttpPackageConfiguration>&& value) { SetHttpPackageConfigurations(std::move(value)); return *this;}

    /**
     * <p>A list of HTTP package configurations for the live source on this
     * account.</p>
     */
    inline UpdateLiveSourceRequest& AddHttpPackageConfigurations(const HttpPackageConfiguration& value) { m_httpPackageConfigurationsHasBeenSet = true; m_httpPackageConfigurations.push_back(value); return *this; }

    /**
     * <p>A list of HTTP package configurations for the live source on this
     * account.</p>
     */
    inline UpdateLiveSourceRequest& AddHttpPackageConfigurations(HttpPackageConfiguration&& value) { m_httpPackageConfigurationsHasBeenSet = true; m_httpPackageConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the live source.</p>
     */
    inline const Aws::String& GetLiveSourceName() const{ return m_liveSourceName; }

    /**
     * <p>The name of the live source.</p>
     */
    inline bool LiveSourceNameHasBeenSet() const { return m_liveSourceNameHasBeenSet; }

    /**
     * <p>The name of the live source.</p>
     */
    inline void SetLiveSourceName(const Aws::String& value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName = value; }

    /**
     * <p>The name of the live source.</p>
     */
    inline void SetLiveSourceName(Aws::String&& value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName = std::move(value); }

    /**
     * <p>The name of the live source.</p>
     */
    inline void SetLiveSourceName(const char* value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName.assign(value); }

    /**
     * <p>The name of the live source.</p>
     */
    inline UpdateLiveSourceRequest& WithLiveSourceName(const Aws::String& value) { SetLiveSourceName(value); return *this;}

    /**
     * <p>The name of the live source.</p>
     */
    inline UpdateLiveSourceRequest& WithLiveSourceName(Aws::String&& value) { SetLiveSourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the live source.</p>
     */
    inline UpdateLiveSourceRequest& WithLiveSourceName(const char* value) { SetLiveSourceName(value); return *this;}


    /**
     * <p>The name of the source location associated with this Live Source.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }

    /**
     * <p>The name of the source location associated with this Live Source.</p>
     */
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }

    /**
     * <p>The name of the source location associated with this Live Source.</p>
     */
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = value; }

    /**
     * <p>The name of the source location associated with this Live Source.</p>
     */
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::move(value); }

    /**
     * <p>The name of the source location associated with this Live Source.</p>
     */
    inline void SetSourceLocationName(const char* value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName.assign(value); }

    /**
     * <p>The name of the source location associated with this Live Source.</p>
     */
    inline UpdateLiveSourceRequest& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The name of the source location associated with this Live Source.</p>
     */
    inline UpdateLiveSourceRequest& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The name of the source location associated with this Live Source.</p>
     */
    inline UpdateLiveSourceRequest& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}

  private:

    Aws::Vector<HttpPackageConfiguration> m_httpPackageConfigurations;
    bool m_httpPackageConfigurationsHasBeenSet = false;

    Aws::String m_liveSourceName;
    bool m_liveSourceNameHasBeenSet = false;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
