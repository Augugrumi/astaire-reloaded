//
// Created by zanna on 17/09/18.
//

#include "printerhandler.h"
namespace connection{
namespace handler {

void connection::handler::PrinterHandler::handler_request(unsigned char *message, std::size_t size) const {
    std::cout << "Message size:\n\t" << size << std::endl;
    std::cout << "Message:\n\t" << message << std::endl;
}

} // namespace handler
} // namespace connection