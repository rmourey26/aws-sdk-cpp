﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/Tag.h>
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
   * <p>Contains the details for an Amazon RDS DB cluster snapshot</p> <p>This data
   * type is used as a response element in the
   * <code>DescribeDBClusterSnapshots</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterSnapshot">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DBClusterSnapshot
  {
  public:
    DBClusterSnapshot();
    DBClusterSnapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBClusterSnapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster snapshot can be restored.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster snapshot can be restored.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster snapshot can be restored.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster snapshot can be restored.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster snapshot can be restored.</p>
     */
    inline DBClusterSnapshot& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster snapshot can be restored.</p>
     */
    inline DBClusterSnapshot& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster snapshot can be restored.</p>
     */
    inline DBClusterSnapshot& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster snapshot can be restored.</p>
     */
    inline DBClusterSnapshot& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the DB
     * cluster snapshot can be restored.</p>
     */
    inline DBClusterSnapshot& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>Specifies the identifier for the DB cluster snapshot.</p>
     */
    inline const Aws::String& GetDBClusterSnapshotIdentifier() const{ return m_dBClusterSnapshotIdentifier; }

    /**
     * <p>Specifies the identifier for the DB cluster snapshot.</p>
     */
    inline bool DBClusterSnapshotIdentifierHasBeenSet() const { return m_dBClusterSnapshotIdentifierHasBeenSet; }

    /**
     * <p>Specifies the identifier for the DB cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(const Aws::String& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = value; }

    /**
     * <p>Specifies the identifier for the DB cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(Aws::String&& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = std::move(value); }

    /**
     * <p>Specifies the identifier for the DB cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(const char* value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>Specifies the identifier for the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithDBClusterSnapshotIdentifier(const Aws::String& value) { SetDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>Specifies the identifier for the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithDBClusterSnapshotIdentifier(Aws::String&& value) { SetDBClusterSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the identifier for the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithDBClusterSnapshotIdentifier(const char* value) { SetDBClusterSnapshotIdentifier(value); return *this;}


    /**
     * <p>Specifies the DB cluster identifier of the DB cluster that this DB cluster
     * snapshot was created from.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>Specifies the DB cluster identifier of the DB cluster that this DB cluster
     * snapshot was created from.</p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>Specifies the DB cluster identifier of the DB cluster that this DB cluster
     * snapshot was created from.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>Specifies the DB cluster identifier of the DB cluster that this DB cluster
     * snapshot was created from.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>Specifies the DB cluster identifier of the DB cluster that this DB cluster
     * snapshot was created from.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>Specifies the DB cluster identifier of the DB cluster that this DB cluster
     * snapshot was created from.</p>
     */
    inline DBClusterSnapshot& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>Specifies the DB cluster identifier of the DB cluster that this DB cluster
     * snapshot was created from.</p>
     */
    inline DBClusterSnapshot& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the DB cluster identifier of the DB cluster that this DB cluster
     * snapshot was created from.</p>
     */
    inline DBClusterSnapshot& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>Provides the time when the snapshot was taken, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }

    /**
     * <p>Provides the time when the snapshot was taken, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }

    /**
     * <p>Provides the time when the snapshot was taken, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline void SetSnapshotCreateTime(const Aws::Utils::DateTime& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = value; }

    /**
     * <p>Provides the time when the snapshot was taken, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline void SetSnapshotCreateTime(Aws::Utils::DateTime&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::move(value); }

    /**
     * <p>Provides the time when the snapshot was taken, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline DBClusterSnapshot& WithSnapshotCreateTime(const Aws::Utils::DateTime& value) { SetSnapshotCreateTime(value); return *this;}

    /**
     * <p>Provides the time when the snapshot was taken, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline DBClusterSnapshot& WithSnapshotCreateTime(Aws::Utils::DateTime&& value) { SetSnapshotCreateTime(std::move(value)); return *this;}


    /**
     * <p>Specifies the name of the database engine for this DB cluster snapshot.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>Specifies the name of the database engine for this DB cluster snapshot.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>Specifies the name of the database engine for this DB cluster snapshot.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>Specifies the name of the database engine for this DB cluster snapshot.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>Specifies the name of the database engine for this DB cluster snapshot.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>Specifies the name of the database engine for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>Specifies the name of the database engine for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the database engine for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>Provides the engine mode of the database engine for this DB cluster
     * snapshot.</p>
     */
    inline const Aws::String& GetEngineMode() const{ return m_engineMode; }

    /**
     * <p>Provides the engine mode of the database engine for this DB cluster
     * snapshot.</p>
     */
    inline bool EngineModeHasBeenSet() const { return m_engineModeHasBeenSet; }

    /**
     * <p>Provides the engine mode of the database engine for this DB cluster
     * snapshot.</p>
     */
    inline void SetEngineMode(const Aws::String& value) { m_engineModeHasBeenSet = true; m_engineMode = value; }

    /**
     * <p>Provides the engine mode of the database engine for this DB cluster
     * snapshot.</p>
     */
    inline void SetEngineMode(Aws::String&& value) { m_engineModeHasBeenSet = true; m_engineMode = std::move(value); }

    /**
     * <p>Provides the engine mode of the database engine for this DB cluster
     * snapshot.</p>
     */
    inline void SetEngineMode(const char* value) { m_engineModeHasBeenSet = true; m_engineMode.assign(value); }

    /**
     * <p>Provides the engine mode of the database engine for this DB cluster
     * snapshot.</p>
     */
    inline DBClusterSnapshot& WithEngineMode(const Aws::String& value) { SetEngineMode(value); return *this;}

    /**
     * <p>Provides the engine mode of the database engine for this DB cluster
     * snapshot.</p>
     */
    inline DBClusterSnapshot& WithEngineMode(Aws::String&& value) { SetEngineMode(std::move(value)); return *this;}

    /**
     * <p>Provides the engine mode of the database engine for this DB cluster
     * snapshot.</p>
     */
    inline DBClusterSnapshot& WithEngineMode(const char* value) { SetEngineMode(value); return *this;}


    /**
     * <p>Specifies the allocated storage size in gibibytes (GiB).</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>Specifies the allocated storage size in gibibytes (GiB).</p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>Specifies the allocated storage size in gibibytes (GiB).</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>Specifies the allocated storage size in gibibytes (GiB).</p>
     */
    inline DBClusterSnapshot& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>Specifies the status of this DB cluster snapshot. Valid statuses are the
     * following:</p> <ul> <li> <p> <code>available</code> </p> </li> <li> <p>
     * <code>copying</code> </p> </li> <li> <p> <code>creating</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the status of this DB cluster snapshot. Valid statuses are the
     * following:</p> <ul> <li> <p> <code>available</code> </p> </li> <li> <p>
     * <code>copying</code> </p> </li> <li> <p> <code>creating</code> </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies the status of this DB cluster snapshot. Valid statuses are the
     * following:</p> <ul> <li> <p> <code>available</code> </p> </li> <li> <p>
     * <code>copying</code> </p> </li> <li> <p> <code>creating</code> </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the status of this DB cluster snapshot. Valid statuses are the
     * following:</p> <ul> <li> <p> <code>available</code> </p> </li> <li> <p>
     * <code>copying</code> </p> </li> <li> <p> <code>creating</code> </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies the status of this DB cluster snapshot. Valid statuses are the
     * following:</p> <ul> <li> <p> <code>available</code> </p> </li> <li> <p>
     * <code>copying</code> </p> </li> <li> <p> <code>creating</code> </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Specifies the status of this DB cluster snapshot. Valid statuses are the
     * following:</p> <ul> <li> <p> <code>available</code> </p> </li> <li> <p>
     * <code>copying</code> </p> </li> <li> <p> <code>creating</code> </p> </li> </ul>
     */
    inline DBClusterSnapshot& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the status of this DB cluster snapshot. Valid statuses are the
     * following:</p> <ul> <li> <p> <code>available</code> </p> </li> <li> <p>
     * <code>copying</code> </p> </li> <li> <p> <code>creating</code> </p> </li> </ul>
     */
    inline DBClusterSnapshot& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Specifies the status of this DB cluster snapshot. Valid statuses are the
     * following:</p> <ul> <li> <p> <code>available</code> </p> </li> <li> <p>
     * <code>copying</code> </p> </li> <li> <p> <code>creating</code> </p> </li> </ul>
     */
    inline DBClusterSnapshot& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Specifies the port that the DB cluster was listening on at the time of the
     * snapshot.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Specifies the port that the DB cluster was listening on at the time of the
     * snapshot.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>Specifies the port that the DB cluster was listening on at the time of the
     * snapshot.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Specifies the port that the DB cluster was listening on at the time of the
     * snapshot.</p>
     */
    inline DBClusterSnapshot& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>Provides the VPC ID associated with the DB cluster snapshot.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>Provides the VPC ID associated with the DB cluster snapshot.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>Provides the VPC ID associated with the DB cluster snapshot.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>Provides the VPC ID associated with the DB cluster snapshot.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>Provides the VPC ID associated with the DB cluster snapshot.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>Provides the VPC ID associated with the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>Provides the VPC ID associated with the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>Provides the VPC ID associated with the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetClusterCreateTime() const{ return m_clusterCreateTime; }

    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }

    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline void SetClusterCreateTime(const Aws::Utils::DateTime& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = value; }

    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline void SetClusterCreateTime(Aws::Utils::DateTime&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::move(value); }

    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline DBClusterSnapshot& WithClusterCreateTime(const Aws::Utils::DateTime& value) { SetClusterCreateTime(value); return *this;}

    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline DBClusterSnapshot& WithClusterCreateTime(Aws::Utils::DateTime&& value) { SetClusterCreateTime(std::move(value)); return *this;}


    /**
     * <p>Provides the master username for this DB cluster snapshot.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>Provides the master username for this DB cluster snapshot.</p>
     */
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

    /**
     * <p>Provides the master username for this DB cluster snapshot.</p>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>Provides the master username for this DB cluster snapshot.</p>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>Provides the master username for this DB cluster snapshot.</p>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>Provides the master username for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>Provides the master username for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>Provides the master username for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


    /**
     * <p>Provides the version of the database engine for this DB cluster snapshot.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>Provides the version of the database engine for this DB cluster snapshot.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>Provides the version of the database engine for this DB cluster snapshot.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>Provides the version of the database engine for this DB cluster snapshot.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>Provides the version of the database engine for this DB cluster snapshot.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>Provides the version of the database engine for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Provides the version of the database engine for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>Provides the version of the database engine for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Provides the license model information for this DB cluster snapshot.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>Provides the license model information for this DB cluster snapshot.</p>
     */
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }

    /**
     * <p>Provides the license model information for this DB cluster snapshot.</p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>Provides the license model information for this DB cluster snapshot.</p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

    /**
     * <p>Provides the license model information for this DB cluster snapshot.</p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>Provides the license model information for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>Provides the license model information for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p>Provides the license model information for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


    /**
     * <p>Provides the type of the DB cluster snapshot.</p>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }

    /**
     * <p>Provides the type of the DB cluster snapshot.</p>
     */
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }

    /**
     * <p>Provides the type of the DB cluster snapshot.</p>
     */
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /**
     * <p>Provides the type of the DB cluster snapshot.</p>
     */
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::move(value); }

    /**
     * <p>Provides the type of the DB cluster snapshot.</p>
     */
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }

    /**
     * <p>Provides the type of the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}

    /**
     * <p>Provides the type of the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithSnapshotType(Aws::String&& value) { SetSnapshotType(std::move(value)); return *this;}

    /**
     * <p>Provides the type of the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}


    /**
     * <p>Specifies the percentage of the estimated data that has been transferred.</p>
     */
    inline int GetPercentProgress() const{ return m_percentProgress; }

    /**
     * <p>Specifies the percentage of the estimated data that has been transferred.</p>
     */
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }

    /**
     * <p>Specifies the percentage of the estimated data that has been transferred.</p>
     */
    inline void SetPercentProgress(int value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }

    /**
     * <p>Specifies the percentage of the estimated data that has been transferred.</p>
     */
    inline DBClusterSnapshot& WithPercentProgress(int value) { SetPercentProgress(value); return *this;}


    /**
     * <p>Specifies whether the DB cluster snapshot is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>Specifies whether the DB cluster snapshot is encrypted.</p>
     */
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p>Specifies whether the DB cluster snapshot is encrypted.</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>Specifies whether the DB cluster snapshot is encrypted.</p>
     */
    inline DBClusterSnapshot& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}


    /**
     * <p>If <code>StorageEncrypted</code> is true, the Amazon Web Services KMS key
     * identifier for the encrypted DB cluster snapshot.</p> <p>The Amazon Web Services
     * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the Amazon Web Services KMS key
     * identifier for the encrypted DB cluster snapshot.</p> <p>The Amazon Web Services
     * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the Amazon Web Services KMS key
     * identifier for the encrypted DB cluster snapshot.</p> <p>The Amazon Web Services
     * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the Amazon Web Services KMS key
     * identifier for the encrypted DB cluster snapshot.</p> <p>The Amazon Web Services
     * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the Amazon Web Services KMS key
     * identifier for the encrypted DB cluster snapshot.</p> <p>The Amazon Web Services
     * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the Amazon Web Services KMS key
     * identifier for the encrypted DB cluster snapshot.</p> <p>The Amazon Web Services
     * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p>
     */
    inline DBClusterSnapshot& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>If <code>StorageEncrypted</code> is true, the Amazon Web Services KMS key
     * identifier for the encrypted DB cluster snapshot.</p> <p>The Amazon Web Services
     * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p>
     */
    inline DBClusterSnapshot& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>If <code>StorageEncrypted</code> is true, the Amazon Web Services KMS key
     * identifier for the encrypted DB cluster snapshot.</p> <p>The Amazon Web Services
     * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p>
     */
    inline DBClusterSnapshot& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster snapshot.</p>
     */
    inline const Aws::String& GetDBClusterSnapshotArn() const{ return m_dBClusterSnapshotArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster snapshot.</p>
     */
    inline bool DBClusterSnapshotArnHasBeenSet() const { return m_dBClusterSnapshotArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotArn(const Aws::String& value) { m_dBClusterSnapshotArnHasBeenSet = true; m_dBClusterSnapshotArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotArn(Aws::String&& value) { m_dBClusterSnapshotArnHasBeenSet = true; m_dBClusterSnapshotArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotArn(const char* value) { m_dBClusterSnapshotArnHasBeenSet = true; m_dBClusterSnapshotArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithDBClusterSnapshotArn(const Aws::String& value) { SetDBClusterSnapshotArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithDBClusterSnapshotArn(Aws::String&& value) { SetDBClusterSnapshotArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithDBClusterSnapshotArn(const char* value) { SetDBClusterSnapshotArn(value); return *this;}


    /**
     * <p>If the DB cluster snapshot was copied from a source DB cluster snapshot, the
     * Amazon Resource Name (ARN) for the source DB cluster snapshot, otherwise, a null
     * value.</p>
     */
    inline const Aws::String& GetSourceDBClusterSnapshotArn() const{ return m_sourceDBClusterSnapshotArn; }

    /**
     * <p>If the DB cluster snapshot was copied from a source DB cluster snapshot, the
     * Amazon Resource Name (ARN) for the source DB cluster snapshot, otherwise, a null
     * value.</p>
     */
    inline bool SourceDBClusterSnapshotArnHasBeenSet() const { return m_sourceDBClusterSnapshotArnHasBeenSet; }

    /**
     * <p>If the DB cluster snapshot was copied from a source DB cluster snapshot, the
     * Amazon Resource Name (ARN) for the source DB cluster snapshot, otherwise, a null
     * value.</p>
     */
    inline void SetSourceDBClusterSnapshotArn(const Aws::String& value) { m_sourceDBClusterSnapshotArnHasBeenSet = true; m_sourceDBClusterSnapshotArn = value; }

    /**
     * <p>If the DB cluster snapshot was copied from a source DB cluster snapshot, the
     * Amazon Resource Name (ARN) for the source DB cluster snapshot, otherwise, a null
     * value.</p>
     */
    inline void SetSourceDBClusterSnapshotArn(Aws::String&& value) { m_sourceDBClusterSnapshotArnHasBeenSet = true; m_sourceDBClusterSnapshotArn = std::move(value); }

    /**
     * <p>If the DB cluster snapshot was copied from a source DB cluster snapshot, the
     * Amazon Resource Name (ARN) for the source DB cluster snapshot, otherwise, a null
     * value.</p>
     */
    inline void SetSourceDBClusterSnapshotArn(const char* value) { m_sourceDBClusterSnapshotArnHasBeenSet = true; m_sourceDBClusterSnapshotArn.assign(value); }

    /**
     * <p>If the DB cluster snapshot was copied from a source DB cluster snapshot, the
     * Amazon Resource Name (ARN) for the source DB cluster snapshot, otherwise, a null
     * value.</p>
     */
    inline DBClusterSnapshot& WithSourceDBClusterSnapshotArn(const Aws::String& value) { SetSourceDBClusterSnapshotArn(value); return *this;}

    /**
     * <p>If the DB cluster snapshot was copied from a source DB cluster snapshot, the
     * Amazon Resource Name (ARN) for the source DB cluster snapshot, otherwise, a null
     * value.</p>
     */
    inline DBClusterSnapshot& WithSourceDBClusterSnapshotArn(Aws::String&& value) { SetSourceDBClusterSnapshotArn(std::move(value)); return *this;}

    /**
     * <p>If the DB cluster snapshot was copied from a source DB cluster snapshot, the
     * Amazon Resource Name (ARN) for the source DB cluster snapshot, otherwise, a null
     * value.</p>
     */
    inline DBClusterSnapshot& WithSourceDBClusterSnapshotArn(const char* value) { SetSourceDBClusterSnapshotArn(value); return *this;}


    /**
     * <p>True if mapping of Amazon Web Services Identity and Access Management (IAM)
     * accounts to database accounts is enabled, and otherwise false.</p>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const{ return m_iAMDatabaseAuthenticationEnabled; }

    /**
     * <p>True if mapping of Amazon Web Services Identity and Access Management (IAM)
     * accounts to database accounts is enabled, and otherwise false.</p>
     */
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }

    /**
     * <p>True if mapping of Amazon Web Services Identity and Access Management (IAM)
     * accounts to database accounts is enabled, and otherwise false.</p>
     */
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }

    /**
     * <p>True if mapping of Amazon Web Services Identity and Access Management (IAM)
     * accounts to database accounts is enabled, and otherwise false.</p>
     */
    inline DBClusterSnapshot& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    
    inline DBClusterSnapshot& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    
    inline DBClusterSnapshot& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    
    inline DBClusterSnapshot& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    
    inline DBClusterSnapshot& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::String m_dBClusterSnapshotIdentifier;
    bool m_dBClusterSnapshotIdentifierHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotCreateTime;
    bool m_snapshotCreateTimeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineMode;
    bool m_engineModeHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Utils::DateTime m_clusterCreateTime;
    bool m_clusterCreateTimeHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet = false;

    int m_percentProgress;
    bool m_percentProgressHasBeenSet = false;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_dBClusterSnapshotArn;
    bool m_dBClusterSnapshotArnHasBeenSet = false;

    Aws::String m_sourceDBClusterSnapshotArn;
    bool m_sourceDBClusterSnapshotArnHasBeenSet = false;

    bool m_iAMDatabaseAuthenticationEnabled;
    bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
