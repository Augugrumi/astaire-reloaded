#ifndef METADATA_H
#define METADATA_H

#include <memory>
#include <cstring>
#include <arpa/inet.h>
#include <string.h>

#include "sfcheaderstruct.h"
#include "sfcutilities.h"

#include "config.h"

namespace utils {

namespace sfc_header {

class SFCFixedLengthHeader {
private:
    struct sfc_header header;

public:
    SFCFixedLengthHeader(const unsigned char*) noexcept;
    SFCFixedLengthHeader(std::shared_ptr<unsigned char>) noexcept;

    uint32_t get_service_path_id() const;
    uint32_t get_service_index() const;
    std::string get_source_ip_address() const;
    std::string get_destination_ip_address() const;
    uint16_t get_source_port() const;
    uint16_t get_destination_port() const;
    uint8_t get_direction_flag() const;
    uint16_t get_ttl() const;

    void set_service_index(uint32_t service_index);
    void set_ttl(uint16_t ttl);

    struct sfc_header get_header() const;
};
} // namespace sfcheader

} // namespace utils

#endif // METADATA_H
