﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/DetectLabelsImageQuality.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/DominantColor.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>The background of the image with regard to image quality and dominant
   * colors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectLabelsImageBackground">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API DetectLabelsImageBackground
  {
  public:
    DetectLabelsImageBackground();
    DetectLabelsImageBackground(Aws::Utils::Json::JsonView jsonValue);
    DetectLabelsImageBackground& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The quality of the image background as defined by brightness and
     * sharpness.</p>
     */
    inline const DetectLabelsImageQuality& GetQuality() const{ return m_quality; }

    /**
     * <p>The quality of the image background as defined by brightness and
     * sharpness.</p>
     */
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }

    /**
     * <p>The quality of the image background as defined by brightness and
     * sharpness.</p>
     */
    inline void SetQuality(const DetectLabelsImageQuality& value) { m_qualityHasBeenSet = true; m_quality = value; }

    /**
     * <p>The quality of the image background as defined by brightness and
     * sharpness.</p>
     */
    inline void SetQuality(DetectLabelsImageQuality&& value) { m_qualityHasBeenSet = true; m_quality = std::move(value); }

    /**
     * <p>The quality of the image background as defined by brightness and
     * sharpness.</p>
     */
    inline DetectLabelsImageBackground& WithQuality(const DetectLabelsImageQuality& value) { SetQuality(value); return *this;}

    /**
     * <p>The quality of the image background as defined by brightness and
     * sharpness.</p>
     */
    inline DetectLabelsImageBackground& WithQuality(DetectLabelsImageQuality&& value) { SetQuality(std::move(value)); return *this;}


    /**
     * <p>The dominant colors found in the background of an image, defined with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline const Aws::Vector<DominantColor>& GetDominantColors() const{ return m_dominantColors; }

    /**
     * <p>The dominant colors found in the background of an image, defined with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline bool DominantColorsHasBeenSet() const { return m_dominantColorsHasBeenSet; }

    /**
     * <p>The dominant colors found in the background of an image, defined with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline void SetDominantColors(const Aws::Vector<DominantColor>& value) { m_dominantColorsHasBeenSet = true; m_dominantColors = value; }

    /**
     * <p>The dominant colors found in the background of an image, defined with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline void SetDominantColors(Aws::Vector<DominantColor>&& value) { m_dominantColorsHasBeenSet = true; m_dominantColors = std::move(value); }

    /**
     * <p>The dominant colors found in the background of an image, defined with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline DetectLabelsImageBackground& WithDominantColors(const Aws::Vector<DominantColor>& value) { SetDominantColors(value); return *this;}

    /**
     * <p>The dominant colors found in the background of an image, defined with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline DetectLabelsImageBackground& WithDominantColors(Aws::Vector<DominantColor>&& value) { SetDominantColors(std::move(value)); return *this;}

    /**
     * <p>The dominant colors found in the background of an image, defined with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline DetectLabelsImageBackground& AddDominantColors(const DominantColor& value) { m_dominantColorsHasBeenSet = true; m_dominantColors.push_back(value); return *this; }

    /**
     * <p>The dominant colors found in the background of an image, defined with RGB
     * values, CSS color name, simplified color name, and PixelPercentage (the
     * percentage of image pixels that have a particular color).</p>
     */
    inline DetectLabelsImageBackground& AddDominantColors(DominantColor&& value) { m_dominantColorsHasBeenSet = true; m_dominantColors.push_back(std::move(value)); return *this; }

  private:

    DetectLabelsImageQuality m_quality;
    bool m_qualityHasBeenSet = false;

    Aws::Vector<DominantColor> m_dominantColors;
    bool m_dominantColorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
