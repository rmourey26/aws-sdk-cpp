﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/LayerVersionsListItem.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>Details about an <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda
   * layer</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/LayersListItem">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API LayersListItem
  {
  public:
    LayersListItem();
    LayersListItem(Aws::Utils::Json::JsonView jsonValue);
    LayersListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the layer.</p>
     */
    inline const Aws::String& GetLayerName() const{ return m_layerName; }

    /**
     * <p>The name of the layer.</p>
     */
    inline bool LayerNameHasBeenSet() const { return m_layerNameHasBeenSet; }

    /**
     * <p>The name of the layer.</p>
     */
    inline void SetLayerName(const Aws::String& value) { m_layerNameHasBeenSet = true; m_layerName = value; }

    /**
     * <p>The name of the layer.</p>
     */
    inline void SetLayerName(Aws::String&& value) { m_layerNameHasBeenSet = true; m_layerName = std::move(value); }

    /**
     * <p>The name of the layer.</p>
     */
    inline void SetLayerName(const char* value) { m_layerNameHasBeenSet = true; m_layerName.assign(value); }

    /**
     * <p>The name of the layer.</p>
     */
    inline LayersListItem& WithLayerName(const Aws::String& value) { SetLayerName(value); return *this;}

    /**
     * <p>The name of the layer.</p>
     */
    inline LayersListItem& WithLayerName(Aws::String&& value) { SetLayerName(std::move(value)); return *this;}

    /**
     * <p>The name of the layer.</p>
     */
    inline LayersListItem& WithLayerName(const char* value) { SetLayerName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline const Aws::String& GetLayerArn() const{ return m_layerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline bool LayerArnHasBeenSet() const { return m_layerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline void SetLayerArn(const Aws::String& value) { m_layerArnHasBeenSet = true; m_layerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline void SetLayerArn(Aws::String&& value) { m_layerArnHasBeenSet = true; m_layerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline void SetLayerArn(const char* value) { m_layerArnHasBeenSet = true; m_layerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline LayersListItem& WithLayerArn(const Aws::String& value) { SetLayerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline LayersListItem& WithLayerArn(Aws::String&& value) { SetLayerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline LayersListItem& WithLayerArn(const char* value) { SetLayerArn(value); return *this;}


    /**
     * <p>The newest version of the layer.</p>
     */
    inline const LayerVersionsListItem& GetLatestMatchingVersion() const{ return m_latestMatchingVersion; }

    /**
     * <p>The newest version of the layer.</p>
     */
    inline bool LatestMatchingVersionHasBeenSet() const { return m_latestMatchingVersionHasBeenSet; }

    /**
     * <p>The newest version of the layer.</p>
     */
    inline void SetLatestMatchingVersion(const LayerVersionsListItem& value) { m_latestMatchingVersionHasBeenSet = true; m_latestMatchingVersion = value; }

    /**
     * <p>The newest version of the layer.</p>
     */
    inline void SetLatestMatchingVersion(LayerVersionsListItem&& value) { m_latestMatchingVersionHasBeenSet = true; m_latestMatchingVersion = std::move(value); }

    /**
     * <p>The newest version of the layer.</p>
     */
    inline LayersListItem& WithLatestMatchingVersion(const LayerVersionsListItem& value) { SetLatestMatchingVersion(value); return *this;}

    /**
     * <p>The newest version of the layer.</p>
     */
    inline LayersListItem& WithLatestMatchingVersion(LayerVersionsListItem&& value) { SetLatestMatchingVersion(std::move(value)); return *this;}

  private:

    Aws::String m_layerName;
    bool m_layerNameHasBeenSet = false;

    Aws::String m_layerArn;
    bool m_layerArnHasBeenSet = false;

    LayerVersionsListItem m_latestMatchingVersion;
    bool m_latestMatchingVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
