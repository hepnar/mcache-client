/*
 * FILE             $Id: $
 *
 * DESCRIPTION      Command serialization/deserialization: text protocol
 *                  implementation base class.
 *
 * PROJECT          Seznam memcache client.
 *
 * AUTHOR           Michal Bukovsky <michal.bukovsky@firma.seznam.cz>
 *
 * Copyright (C) Seznam.cz a.s. 2012
 * All Rights Reserved
 *
 * HISTORY
 *       2012-09-24 (bukovsky)
 *                  First draft.
 */

#ifndef MCACHE_PROTO_BASE_H
#define MCACHE_PROTO_BASE_H

namespace mc {
namespace proto {
namespace txt {

/** Base class of all commands.
 */
class command_t {
public:
};

} // namespace txt
} // namespace proto
} // namespace mc

#endif /* MCACHE_PROTO_BASE_H */

