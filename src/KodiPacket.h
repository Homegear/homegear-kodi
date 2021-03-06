/* Copyright 2013-2019 Homegear GmbH
 *
 * Homegear is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Homegear is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Homegear.  If not, see <http://www.gnu.org/licenses/>.
 *
 * In addition, as a special exception, the copyright holders give
 * permission to link the code of portions of this program with the
 * OpenSSL library under certain conditions as described in each
 * individual source file, and distribute linked combinations
 * including the two.
 * You must obey the GNU General Public License in all respects
 * for all of the code used other than OpenSSL.  If you modify
 * file(s) with this exception, you may extend this exception to your
 * version of the file(s), but you are not obligated to do so.  If you
 * do not wish to do so, delete this exception statement from your
 * version.  If you delete this exception statement from all source
 * files in the program, then also delete it here.
 */

#ifndef MYPACKET_H_
#define MYPACKET_H_

#include <homegear-base/BaseLib.h>

namespace Kodi
{

class KodiPacket : public BaseLib::Systems::Packet
{
    public:
        //Properties
        KodiPacket();
        KodiPacket(BaseLib::PVariable& json, int64_t timeReceived = 0);
        KodiPacket(std::string method, BaseLib::PVariable parameters, int64_t timeReceived = 0);
        virtual ~KodiPacket();

        virtual BaseLib::PVariable getJson();

        std::string getMethod();
        BaseLib::PVariable getParameters();
        BaseLib::PVariable getResult();
    protected:
        std::string _method;
        BaseLib::PVariable _parameters;
        BaseLib::PVariable _result;
};

}
#endif
