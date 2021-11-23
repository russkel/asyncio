//
// Created by netcan on 2021/11/21.
//

#ifndef ASYNCIO_EXCEPTION_H
#define ASYNCIO_EXCEPTION_H
#include <asyncio/asyncio_ns.h>
#include <exception>
ASYNCIO_NS_BEGIN
struct TimeoutError: std::exception {
    const char* what() const noexcept override {
        return "TimeoutError";
    }
};
ASYNCIO_NS_END
#endif // ASYNCIO_EXCEPTION_H