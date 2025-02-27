﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/LoggingEnabled.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Crt
{
namespace Model
{

  /**
   * <p>Container for logging status information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/BucketLoggingStatus">AWS
   * API Reference</a></p>
   */
  class AWS_S3CRT_API BucketLoggingStatus
  {
  public:
    BucketLoggingStatus();
    BucketLoggingStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    BucketLoggingStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    
    inline const LoggingEnabled& GetLoggingEnabled() const{ return m_loggingEnabled; }

    
    inline bool LoggingEnabledHasBeenSet() const { return m_loggingEnabledHasBeenSet; }

    
    inline void SetLoggingEnabled(const LoggingEnabled& value) { m_loggingEnabledHasBeenSet = true; m_loggingEnabled = value; }

    
    inline void SetLoggingEnabled(LoggingEnabled&& value) { m_loggingEnabledHasBeenSet = true; m_loggingEnabled = std::move(value); }

    
    inline BucketLoggingStatus& WithLoggingEnabled(const LoggingEnabled& value) { SetLoggingEnabled(value); return *this;}

    
    inline BucketLoggingStatus& WithLoggingEnabled(LoggingEnabled&& value) { SetLoggingEnabled(std::move(value)); return *this;}

  private:

    LoggingEnabled m_loggingEnabled;
    bool m_loggingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
