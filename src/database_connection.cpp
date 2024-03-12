#include "../include/database_connection.hpp"

DatabaseConnection::DatabaseConnection(const std::string& name) : dbName(name) {
    connect();
}

DatabaseConnection::~DatabaseConnection(){
    disconnect();
}

void DatabaseConnection::connect(){}

void DatabaseConnection::disconnect(){}

void DatabaseConnection::executeQuery(){}
