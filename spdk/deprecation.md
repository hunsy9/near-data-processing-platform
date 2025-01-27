# Deprecation

## ABI and API Deprecation

This document details the policy for maintaining stability of SPDK ABI and API.

Major ABI version can change at most once for each SPDK release.
ABI versions are managed separately for each library and follow [Semantic Versioning](https://semver.org/).

API and ABI deprecation notices shall be posted in the next section.
Each entry must describe what will be removed and can suggest the future use or alternative.
Specific future SPDK release for the removal must be provided.
ABI cannot be removed without providing deprecation notice for at least single SPDK release.

Deprecated code paths must be registered with `SPDK_DEPRECATION_REGISTER()` and logged with
`SPDK_LOG_DEPRECATED()`. The tag used with these macros will appear in the SPDK
log at the warn level when `SPDK_LOG_DEPRECATED()` is called, subject to rate limits.
The tags can be matched with the level 4 headers below.

## Deprecation Notices

### nvme

#### `spdk_nvme_ctrlr_opts.psk`

Passing NVMe/TLS pre-shared keys via `spdk_nvme_ctrlr_opts.psk` is deprecated and this field will be
removed in the v24.09 release.  Instead, a key obtained from the keyring library should be passed
in `spdk_nvme_ctrlr_opts.tls_psk`.

### init

#### `spdk_subsystem_init_from_json_config`

The function is deprecated and will be removed in 24.09 release. Please use
`spdk_subsystem_load_config` instead.

### nvmf

#### `decode_rpc_listen_address`

`transport` field in `listen_addresses` decoders is deprecated. `trtype` field should be used
instead. `transport` field will be removed in 24.09 release.

#### `spdk_nvmf_request_exec_fabrics`

This function is deprecated and will be removed in the 24.09 release.  Instead, users should use
`spdk_nvmf_request_exec()`, which now allows all transports (both fabrics and non-fabrics) to
execute fabrics commands.

#### `nvmf_subsystem_add_host`

The ability to specifying path to a PSK file via the `psk` parameter in `nvmf_subsystem_add_host` is
deprecated and will be removed in the v24.09 release.  Instead, the name of a key attached to the
keyring should be used.

### gpt

#### `old_gpt_guid`

Deprecated the SPDK partition type GUID `7c5222bd-8f5d-4087-9c00-bf9843c7b58c`. Partitions of this
type have bdevs created that are one block less than the actual size of the partition. Existing
partitions using the deprecated GUID can continue to use that GUID; support for the deprecated GUID
will remain in SPDK indefinitely, and will continue to exhibit the off-by-one bug so that on-disk
metadata layouts based on the incorrect size are not affected.

See GitHub issue [2801](https://github.com/spdk/spdk/issues/2801) for additional details on the bug.

New SPDK partition types should use GUID `6527994e-2c5a-4eec-9613-8f5944074e8b` which will create
a bdev of the correct size.

### rpc

#### `spdk_rpc_listen` `spdk_rpc_accept` `spdk_rpc_close`

These functions are deprecated and will be removed in 24.09 release. Please use
`spdk_rpc_server_listen`, `spdk_rpc_server_accept` and `spdk_rpc_server_close` instead.
