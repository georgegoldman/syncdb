#pragma once

#include "sqlite3.h"
#include <tuple>
#include <string>

using Record = std::tuple<std::string, std::string, std::string>;

class DatabaseConnection {
    private:
        std::string dbName;
    public:
        DatabaseConnection(const std::string& name);
        ~DatabaseConnection();

        // connect to database
        void connect();

        // disconnect from database
        void disconnect();

        /* execute a query and return the result
            with your actual data type)
        */
       void executeQuery(const std::string& query);
};