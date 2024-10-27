DROP TABLE clients;
DROP TABLE vehicles;
DROP TABLE reservations;
DROP TABLE archived_reservations;
DROP TABLE blacklist;

CREATE TABLE clients (
    clientId NUMBER,
    fName VARCHAR2(16),
    lName VARCHAR2(16),
    DOB DATE,
    City VARCHAR2(16),
    Gender BOOLEAN
);

CREATE TABLE vehicles (
    vehicleId NUMBER,
    model VARCHAR2(16),
    make VARCHAR2(16),
    costPerDay NUMBER
);

CREATE TABLE reservations (
    reservationId NUMBER,
    startDate DATE,
    endDate DATE,
    clientID NUMBER,
    vehicleID NUMBER,
    totalCost NUMBER
);

CREATE TABLE archived_reservations (
    reservationId NUMBER,
    startDate DATE,
    endDate DATE,
    clientID NUMBER,
    vehicleID NUMBER,
    totalCost NUMBER,
    addedBy VARCHAR(16),
    addedDate DATE
);

CREATE TABLE blacklist (
    clientId NUMBER,
    fName VARCHAR2(16),
    lName VARCHAR2(16),
    DOB DATE,
    City VARCHAR2(16),
    Gender BOOLEAN,
    reason TEXT,
    addedBy VARCHAR2(16),
    addedDate Date
);