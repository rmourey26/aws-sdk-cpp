﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>Specifies the settings that control the size and behavior of the connection
   * pool associated with a <code>DBProxyTargetGroup</code>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ConnectionPoolConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API ConnectionPoolConfiguration
  {
  public:
    ConnectionPoolConfiguration();
    ConnectionPoolConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    ConnectionPoolConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The maximum size of the connection pool for each target in a target group.
     * The value is expressed as a percentage of the <code>max_connections</code>
     * setting for the RDS DB instance or Aurora DB cluster used by the target
     * group.</p> <p>If you specify <code>MaxIdleConnectionsPercent</code>, then you
     * must also include a value for this parameter.</p> <p>Default: 10 for RDS for
     * Microsoft SQL Server, and 100 for all other engines</p> <p>Constraints: Must be
     * between 1 and 100.</p>
     */
    inline int GetMaxConnectionsPercent() const{ return m_maxConnectionsPercent; }

    /**
     * <p>The maximum size of the connection pool for each target in a target group.
     * The value is expressed as a percentage of the <code>max_connections</code>
     * setting for the RDS DB instance or Aurora DB cluster used by the target
     * group.</p> <p>If you specify <code>MaxIdleConnectionsPercent</code>, then you
     * must also include a value for this parameter.</p> <p>Default: 10 for RDS for
     * Microsoft SQL Server, and 100 for all other engines</p> <p>Constraints: Must be
     * between 1 and 100.</p>
     */
    inline bool MaxConnectionsPercentHasBeenSet() const { return m_maxConnectionsPercentHasBeenSet; }

    /**
     * <p>The maximum size of the connection pool for each target in a target group.
     * The value is expressed as a percentage of the <code>max_connections</code>
     * setting for the RDS DB instance or Aurora DB cluster used by the target
     * group.</p> <p>If you specify <code>MaxIdleConnectionsPercent</code>, then you
     * must also include a value for this parameter.</p> <p>Default: 10 for RDS for
     * Microsoft SQL Server, and 100 for all other engines</p> <p>Constraints: Must be
     * between 1 and 100.</p>
     */
    inline void SetMaxConnectionsPercent(int value) { m_maxConnectionsPercentHasBeenSet = true; m_maxConnectionsPercent = value; }

    /**
     * <p>The maximum size of the connection pool for each target in a target group.
     * The value is expressed as a percentage of the <code>max_connections</code>
     * setting for the RDS DB instance or Aurora DB cluster used by the target
     * group.</p> <p>If you specify <code>MaxIdleConnectionsPercent</code>, then you
     * must also include a value for this parameter.</p> <p>Default: 10 for RDS for
     * Microsoft SQL Server, and 100 for all other engines</p> <p>Constraints: Must be
     * between 1 and 100.</p>
     */
    inline ConnectionPoolConfiguration& WithMaxConnectionsPercent(int value) { SetMaxConnectionsPercent(value); return *this;}


    /**
     * <p>Controls how actively the proxy closes idle database connections in the
     * connection pool. The value is expressed as a percentage of the
     * <code>max_connections</code> setting for the RDS DB instance or Aurora DB
     * cluster used by the target group. With a high value, the proxy leaves a high
     * percentage of idle database connections open. A low value causes the proxy to
     * close more idle connections and return them to the database.</p> <p>If you
     * specify this parameter, then you must also include a value for
     * <code>MaxConnectionsPercent</code>.</p> <p>Default: The default value is half of
     * the value of <code>MaxConnectionsPercent</code>. For example, if
     * <code>MaxConnectionsPercent</code> is 80, then the default value of
     * <code>MaxIdleConnectionsPercent</code> is 40. If the value of
     * <code>MaxConnectionsPercent</code> isn't specified, then for SQL Server,
     * <code>MaxIdleConnectionsPercent</code> is 5, and for all other engines, the
     * default is 50.</p> <p>Constraints: Must be between 0 and the value of
     * <code>MaxConnectionsPercent</code>.</p>
     */
    inline int GetMaxIdleConnectionsPercent() const{ return m_maxIdleConnectionsPercent; }

    /**
     * <p>Controls how actively the proxy closes idle database connections in the
     * connection pool. The value is expressed as a percentage of the
     * <code>max_connections</code> setting for the RDS DB instance or Aurora DB
     * cluster used by the target group. With a high value, the proxy leaves a high
     * percentage of idle database connections open. A low value causes the proxy to
     * close more idle connections and return them to the database.</p> <p>If you
     * specify this parameter, then you must also include a value for
     * <code>MaxConnectionsPercent</code>.</p> <p>Default: The default value is half of
     * the value of <code>MaxConnectionsPercent</code>. For example, if
     * <code>MaxConnectionsPercent</code> is 80, then the default value of
     * <code>MaxIdleConnectionsPercent</code> is 40. If the value of
     * <code>MaxConnectionsPercent</code> isn't specified, then for SQL Server,
     * <code>MaxIdleConnectionsPercent</code> is 5, and for all other engines, the
     * default is 50.</p> <p>Constraints: Must be between 0 and the value of
     * <code>MaxConnectionsPercent</code>.</p>
     */
    inline bool MaxIdleConnectionsPercentHasBeenSet() const { return m_maxIdleConnectionsPercentHasBeenSet; }

    /**
     * <p>Controls how actively the proxy closes idle database connections in the
     * connection pool. The value is expressed as a percentage of the
     * <code>max_connections</code> setting for the RDS DB instance or Aurora DB
     * cluster used by the target group. With a high value, the proxy leaves a high
     * percentage of idle database connections open. A low value causes the proxy to
     * close more idle connections and return them to the database.</p> <p>If you
     * specify this parameter, then you must also include a value for
     * <code>MaxConnectionsPercent</code>.</p> <p>Default: The default value is half of
     * the value of <code>MaxConnectionsPercent</code>. For example, if
     * <code>MaxConnectionsPercent</code> is 80, then the default value of
     * <code>MaxIdleConnectionsPercent</code> is 40. If the value of
     * <code>MaxConnectionsPercent</code> isn't specified, then for SQL Server,
     * <code>MaxIdleConnectionsPercent</code> is 5, and for all other engines, the
     * default is 50.</p> <p>Constraints: Must be between 0 and the value of
     * <code>MaxConnectionsPercent</code>.</p>
     */
    inline void SetMaxIdleConnectionsPercent(int value) { m_maxIdleConnectionsPercentHasBeenSet = true; m_maxIdleConnectionsPercent = value; }

    /**
     * <p>Controls how actively the proxy closes idle database connections in the
     * connection pool. The value is expressed as a percentage of the
     * <code>max_connections</code> setting for the RDS DB instance or Aurora DB
     * cluster used by the target group. With a high value, the proxy leaves a high
     * percentage of idle database connections open. A low value causes the proxy to
     * close more idle connections and return them to the database.</p> <p>If you
     * specify this parameter, then you must also include a value for
     * <code>MaxConnectionsPercent</code>.</p> <p>Default: The default value is half of
     * the value of <code>MaxConnectionsPercent</code>. For example, if
     * <code>MaxConnectionsPercent</code> is 80, then the default value of
     * <code>MaxIdleConnectionsPercent</code> is 40. If the value of
     * <code>MaxConnectionsPercent</code> isn't specified, then for SQL Server,
     * <code>MaxIdleConnectionsPercent</code> is 5, and for all other engines, the
     * default is 50.</p> <p>Constraints: Must be between 0 and the value of
     * <code>MaxConnectionsPercent</code>.</p>
     */
    inline ConnectionPoolConfiguration& WithMaxIdleConnectionsPercent(int value) { SetMaxIdleConnectionsPercent(value); return *this;}


    /**
     * <p>The number of seconds for a proxy to wait for a connection to become
     * available in the connection pool. Only applies when the proxy has opened its
     * maximum number of connections and all connections are busy with client
     * sessions.</p> <p>Default: 120</p> <p>Constraints: between 1 and 3600, or 0
     * representing unlimited</p>
     */
    inline int GetConnectionBorrowTimeout() const{ return m_connectionBorrowTimeout; }

    /**
     * <p>The number of seconds for a proxy to wait for a connection to become
     * available in the connection pool. Only applies when the proxy has opened its
     * maximum number of connections and all connections are busy with client
     * sessions.</p> <p>Default: 120</p> <p>Constraints: between 1 and 3600, or 0
     * representing unlimited</p>
     */
    inline bool ConnectionBorrowTimeoutHasBeenSet() const { return m_connectionBorrowTimeoutHasBeenSet; }

    /**
     * <p>The number of seconds for a proxy to wait for a connection to become
     * available in the connection pool. Only applies when the proxy has opened its
     * maximum number of connections and all connections are busy with client
     * sessions.</p> <p>Default: 120</p> <p>Constraints: between 1 and 3600, or 0
     * representing unlimited</p>
     */
    inline void SetConnectionBorrowTimeout(int value) { m_connectionBorrowTimeoutHasBeenSet = true; m_connectionBorrowTimeout = value; }

    /**
     * <p>The number of seconds for a proxy to wait for a connection to become
     * available in the connection pool. Only applies when the proxy has opened its
     * maximum number of connections and all connections are busy with client
     * sessions.</p> <p>Default: 120</p> <p>Constraints: between 1 and 3600, or 0
     * representing unlimited</p>
     */
    inline ConnectionPoolConfiguration& WithConnectionBorrowTimeout(int value) { SetConnectionBorrowTimeout(value); return *this;}


    /**
     * <p>Each item in the list represents a class of SQL operations that normally
     * cause all later statements in a session using a proxy to be pinned to the same
     * underlying database connection. Including an item in the list exempts that class
     * of SQL operations from the pinning behavior.</p> <p>Default: no session pinning
     * filters</p>
     */
    inline const Aws::Vector<Aws::String>& GetSessionPinningFilters() const{ return m_sessionPinningFilters; }

    /**
     * <p>Each item in the list represents a class of SQL operations that normally
     * cause all later statements in a session using a proxy to be pinned to the same
     * underlying database connection. Including an item in the list exempts that class
     * of SQL operations from the pinning behavior.</p> <p>Default: no session pinning
     * filters</p>
     */
    inline bool SessionPinningFiltersHasBeenSet() const { return m_sessionPinningFiltersHasBeenSet; }

    /**
     * <p>Each item in the list represents a class of SQL operations that normally
     * cause all later statements in a session using a proxy to be pinned to the same
     * underlying database connection. Including an item in the list exempts that class
     * of SQL operations from the pinning behavior.</p> <p>Default: no session pinning
     * filters</p>
     */
    inline void SetSessionPinningFilters(const Aws::Vector<Aws::String>& value) { m_sessionPinningFiltersHasBeenSet = true; m_sessionPinningFilters = value; }

    /**
     * <p>Each item in the list represents a class of SQL operations that normally
     * cause all later statements in a session using a proxy to be pinned to the same
     * underlying database connection. Including an item in the list exempts that class
     * of SQL operations from the pinning behavior.</p> <p>Default: no session pinning
     * filters</p>
     */
    inline void SetSessionPinningFilters(Aws::Vector<Aws::String>&& value) { m_sessionPinningFiltersHasBeenSet = true; m_sessionPinningFilters = std::move(value); }

    /**
     * <p>Each item in the list represents a class of SQL operations that normally
     * cause all later statements in a session using a proxy to be pinned to the same
     * underlying database connection. Including an item in the list exempts that class
     * of SQL operations from the pinning behavior.</p> <p>Default: no session pinning
     * filters</p>
     */
    inline ConnectionPoolConfiguration& WithSessionPinningFilters(const Aws::Vector<Aws::String>& value) { SetSessionPinningFilters(value); return *this;}

    /**
     * <p>Each item in the list represents a class of SQL operations that normally
     * cause all later statements in a session using a proxy to be pinned to the same
     * underlying database connection. Including an item in the list exempts that class
     * of SQL operations from the pinning behavior.</p> <p>Default: no session pinning
     * filters</p>
     */
    inline ConnectionPoolConfiguration& WithSessionPinningFilters(Aws::Vector<Aws::String>&& value) { SetSessionPinningFilters(std::move(value)); return *this;}

    /**
     * <p>Each item in the list represents a class of SQL operations that normally
     * cause all later statements in a session using a proxy to be pinned to the same
     * underlying database connection. Including an item in the list exempts that class
     * of SQL operations from the pinning behavior.</p> <p>Default: no session pinning
     * filters</p>
     */
    inline ConnectionPoolConfiguration& AddSessionPinningFilters(const Aws::String& value) { m_sessionPinningFiltersHasBeenSet = true; m_sessionPinningFilters.push_back(value); return *this; }

    /**
     * <p>Each item in the list represents a class of SQL operations that normally
     * cause all later statements in a session using a proxy to be pinned to the same
     * underlying database connection. Including an item in the list exempts that class
     * of SQL operations from the pinning behavior.</p> <p>Default: no session pinning
     * filters</p>
     */
    inline ConnectionPoolConfiguration& AddSessionPinningFilters(Aws::String&& value) { m_sessionPinningFiltersHasBeenSet = true; m_sessionPinningFilters.push_back(std::move(value)); return *this; }

    /**
     * <p>Each item in the list represents a class of SQL operations that normally
     * cause all later statements in a session using a proxy to be pinned to the same
     * underlying database connection. Including an item in the list exempts that class
     * of SQL operations from the pinning behavior.</p> <p>Default: no session pinning
     * filters</p>
     */
    inline ConnectionPoolConfiguration& AddSessionPinningFilters(const char* value) { m_sessionPinningFiltersHasBeenSet = true; m_sessionPinningFilters.push_back(value); return *this; }


    /**
     * <p>One or more SQL statements for the proxy to run when opening each new
     * database connection. Typically used with <code>SET</code> statements to make
     * sure that each connection has identical settings such as time zone and character
     * set. For multiple statements, use semicolons as the separator. You can also
     * include multiple variables in a single <code>SET</code> statement, such as
     * <code>SET x=1, y=2</code>.</p> <p>Default: no initialization query</p>
     */
    inline const Aws::String& GetInitQuery() const{ return m_initQuery; }

    /**
     * <p>One or more SQL statements for the proxy to run when opening each new
     * database connection. Typically used with <code>SET</code> statements to make
     * sure that each connection has identical settings such as time zone and character
     * set. For multiple statements, use semicolons as the separator. You can also
     * include multiple variables in a single <code>SET</code> statement, such as
     * <code>SET x=1, y=2</code>.</p> <p>Default: no initialization query</p>
     */
    inline bool InitQueryHasBeenSet() const { return m_initQueryHasBeenSet; }

    /**
     * <p>One or more SQL statements for the proxy to run when opening each new
     * database connection. Typically used with <code>SET</code> statements to make
     * sure that each connection has identical settings such as time zone and character
     * set. For multiple statements, use semicolons as the separator. You can also
     * include multiple variables in a single <code>SET</code> statement, such as
     * <code>SET x=1, y=2</code>.</p> <p>Default: no initialization query</p>
     */
    inline void SetInitQuery(const Aws::String& value) { m_initQueryHasBeenSet = true; m_initQuery = value; }

    /**
     * <p>One or more SQL statements for the proxy to run when opening each new
     * database connection. Typically used with <code>SET</code> statements to make
     * sure that each connection has identical settings such as time zone and character
     * set. For multiple statements, use semicolons as the separator. You can also
     * include multiple variables in a single <code>SET</code> statement, such as
     * <code>SET x=1, y=2</code>.</p> <p>Default: no initialization query</p>
     */
    inline void SetInitQuery(Aws::String&& value) { m_initQueryHasBeenSet = true; m_initQuery = std::move(value); }

    /**
     * <p>One or more SQL statements for the proxy to run when opening each new
     * database connection. Typically used with <code>SET</code> statements to make
     * sure that each connection has identical settings such as time zone and character
     * set. For multiple statements, use semicolons as the separator. You can also
     * include multiple variables in a single <code>SET</code> statement, such as
     * <code>SET x=1, y=2</code>.</p> <p>Default: no initialization query</p>
     */
    inline void SetInitQuery(const char* value) { m_initQueryHasBeenSet = true; m_initQuery.assign(value); }

    /**
     * <p>One or more SQL statements for the proxy to run when opening each new
     * database connection. Typically used with <code>SET</code> statements to make
     * sure that each connection has identical settings such as time zone and character
     * set. For multiple statements, use semicolons as the separator. You can also
     * include multiple variables in a single <code>SET</code> statement, such as
     * <code>SET x=1, y=2</code>.</p> <p>Default: no initialization query</p>
     */
    inline ConnectionPoolConfiguration& WithInitQuery(const Aws::String& value) { SetInitQuery(value); return *this;}

    /**
     * <p>One or more SQL statements for the proxy to run when opening each new
     * database connection. Typically used with <code>SET</code> statements to make
     * sure that each connection has identical settings such as time zone and character
     * set. For multiple statements, use semicolons as the separator. You can also
     * include multiple variables in a single <code>SET</code> statement, such as
     * <code>SET x=1, y=2</code>.</p> <p>Default: no initialization query</p>
     */
    inline ConnectionPoolConfiguration& WithInitQuery(Aws::String&& value) { SetInitQuery(std::move(value)); return *this;}

    /**
     * <p>One or more SQL statements for the proxy to run when opening each new
     * database connection. Typically used with <code>SET</code> statements to make
     * sure that each connection has identical settings such as time zone and character
     * set. For multiple statements, use semicolons as the separator. You can also
     * include multiple variables in a single <code>SET</code> statement, such as
     * <code>SET x=1, y=2</code>.</p> <p>Default: no initialization query</p>
     */
    inline ConnectionPoolConfiguration& WithInitQuery(const char* value) { SetInitQuery(value); return *this;}

  private:

    int m_maxConnectionsPercent;
    bool m_maxConnectionsPercentHasBeenSet = false;

    int m_maxIdleConnectionsPercent;
    bool m_maxIdleConnectionsPercentHasBeenSet = false;

    int m_connectionBorrowTimeout;
    bool m_connectionBorrowTimeoutHasBeenSet = false;

    Aws::Vector<Aws::String> m_sessionPinningFilters;
    bool m_sessionPinningFiltersHasBeenSet = false;

    Aws::String m_initQuery;
    bool m_initQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
