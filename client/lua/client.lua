local shared = require 'rom/shared'
local capability = require 'rom/capability'
local env = require 'rom/env'

local env = env.L4ReEnv.env()

local server_cap = env:get_cap_calc_2("calc_server")

if not server_cap:is_valid() then
  error("Could not get server capability")
end

local server = server_cap:access()

local val1 = 8
local val2 = 5
local err = nil

print("Asking for " .. val1 .. " - " .. val2)

err, val1 = server:sub(8, 5, 0)
if err ~= 0 then
  error("Error talking to server")
end

print("Result of substract call: " .. val1)

print("Asking for -" .. val1)

err, val1 = server:neg(val1, 0)
if err ~= 0 then
  error("Error talking to server")
end

print("Result of negate call: " .. val1)
