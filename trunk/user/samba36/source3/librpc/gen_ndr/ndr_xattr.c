/* parser auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_xattr.h"

#include "librpc/gen_ndr/ndr_security.h"
static enum ndr_err_code ndr_push_xattr_DosInfoFFFFCompat(struct ndr_push *ndr, int ndr_flags, const struct xattr_DosInfoFFFFCompat *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->attrib));
		NDR_CHECK(ndr_push_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_xattr_DosInfoFFFFCompat(struct ndr_pull *ndr, int ndr_flags, struct xattr_DosInfoFFFFCompat *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->attrib));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_xattr_DosInfoFFFFCompat(struct ndr_print *ndr, const char *name, const struct xattr_DosInfoFFFFCompat *r)
{
	ndr_print_struct(ndr, name, "xattr_DosInfoFFFFCompat");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint32(ndr, "attrib", r->attrib);
	ndr->depth--;
}

static enum ndr_err_code ndr_push_xattr_DosInfo1(struct ndr_push *ndr, int ndr_flags, const struct xattr_DosInfo1 *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->attrib));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->ea_size));
		NDR_CHECK(ndr_push_udlong(ndr, NDR_SCALARS, r->size));
		NDR_CHECK(ndr_push_udlong(ndr, NDR_SCALARS, r->alloc_size));
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->create_time));
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->change_time));
		NDR_CHECK(ndr_push_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_xattr_DosInfo1(struct ndr_pull *ndr, int ndr_flags, struct xattr_DosInfo1 *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->attrib));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->ea_size));
		NDR_CHECK(ndr_pull_udlong(ndr, NDR_SCALARS, &r->size));
		NDR_CHECK(ndr_pull_udlong(ndr, NDR_SCALARS, &r->alloc_size));
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->create_time));
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->change_time));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_xattr_DosInfo1(struct ndr_print *ndr, const char *name, const struct xattr_DosInfo1 *r)
{
	ndr_print_struct(ndr, name, "xattr_DosInfo1");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint32(ndr, "attrib", r->attrib);
	ndr_print_uint32(ndr, "ea_size", r->ea_size);
	ndr_print_udlong(ndr, "size", r->size);
	ndr_print_udlong(ndr, "alloc_size", r->alloc_size);
	ndr_print_NTTIME(ndr, "create_time", r->create_time);
	ndr_print_NTTIME(ndr, "change_time", r->change_time);
	ndr->depth--;
}

static enum ndr_err_code ndr_push_xattr_DosInfo2Old(struct ndr_push *ndr, int ndr_flags, const struct xattr_DosInfo2Old *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->flags));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->attrib));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->ea_size));
		NDR_CHECK(ndr_push_udlong(ndr, NDR_SCALARS, r->size));
		NDR_CHECK(ndr_push_udlong(ndr, NDR_SCALARS, r->alloc_size));
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->create_time));
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->change_time));
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->write_time));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->name));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_push_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_xattr_DosInfo2Old(struct ndr_pull *ndr, int ndr_flags, struct xattr_DosInfo2Old *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->flags));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->attrib));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->ea_size));
		NDR_CHECK(ndr_pull_udlong(ndr, NDR_SCALARS, &r->size));
		NDR_CHECK(ndr_pull_udlong(ndr, NDR_SCALARS, &r->alloc_size));
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->create_time));
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->change_time));
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->write_time));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->name));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_xattr_DosInfo2Old(struct ndr_print *ndr, const char *name, const struct xattr_DosInfo2Old *r)
{
	ndr_print_struct(ndr, name, "xattr_DosInfo2Old");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint32(ndr, "flags", r->flags);
	ndr_print_uint32(ndr, "attrib", r->attrib);
	ndr_print_uint32(ndr, "ea_size", r->ea_size);
	ndr_print_udlong(ndr, "size", r->size);
	ndr_print_udlong(ndr, "alloc_size", r->alloc_size);
	ndr_print_NTTIME(ndr, "create_time", r->create_time);
	ndr_print_NTTIME(ndr, "change_time", r->change_time);
	ndr_print_NTTIME(ndr, "write_time", r->write_time);
	ndr_print_string(ndr, "name", r->name);
	ndr->depth--;
}

static enum ndr_err_code ndr_push_xattr_DosInfoValidFlags(struct ndr_push *ndr, int ndr_flags, uint32_t r)
{
	NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r));
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_xattr_DosInfoValidFlags(struct ndr_pull *ndr, int ndr_flags, uint32_t *r)
{
	uint32_t v;
	NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &v));
	*r = v;
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_xattr_DosInfoValidFlags(struct ndr_print *ndr, const char *name, uint32_t r)
{
	ndr_print_uint32(ndr, name, r);
	ndr->depth++;
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "XATTR_DOSINFO_ATTRIB", XATTR_DOSINFO_ATTRIB, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "XATTR_DOSINFO_EA_SIZE", XATTR_DOSINFO_EA_SIZE, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "XATTR_DOSINFO_SIZE", XATTR_DOSINFO_SIZE, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "XATTR_DOSINFO_ALLOC_SIZE", XATTR_DOSINFO_ALLOC_SIZE, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "XATTR_DOSINFO_CREATE_TIME", XATTR_DOSINFO_CREATE_TIME, r);
	ndr_print_bitmap_flag(ndr, sizeof(uint32_t), "XATTR_DOSINFO_CHANGE_TIME", XATTR_DOSINFO_CHANGE_TIME, r);
	ndr->depth--;
}

static enum ndr_err_code ndr_push_xattr_DosInfo3(struct ndr_push *ndr, int ndr_flags, const struct xattr_DosInfo3 *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_xattr_DosInfoValidFlags(ndr, NDR_SCALARS, r->valid_flags));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->attrib));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->ea_size));
		NDR_CHECK(ndr_push_udlong(ndr, NDR_SCALARS, r->size));
		NDR_CHECK(ndr_push_udlong(ndr, NDR_SCALARS, r->alloc_size));
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->create_time));
		NDR_CHECK(ndr_push_NTTIME(ndr, NDR_SCALARS, r->change_time));
		NDR_CHECK(ndr_push_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_xattr_DosInfo3(struct ndr_pull *ndr, int ndr_flags, struct xattr_DosInfo3 *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_xattr_DosInfoValidFlags(ndr, NDR_SCALARS, &r->valid_flags));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->attrib));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->ea_size));
		NDR_CHECK(ndr_pull_udlong(ndr, NDR_SCALARS, &r->size));
		NDR_CHECK(ndr_pull_udlong(ndr, NDR_SCALARS, &r->alloc_size));
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->create_time));
		NDR_CHECK(ndr_pull_NTTIME(ndr, NDR_SCALARS, &r->change_time));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_xattr_DosInfo3(struct ndr_print *ndr, const char *name, const struct xattr_DosInfo3 *r)
{
	ndr_print_struct(ndr, name, "xattr_DosInfo3");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_xattr_DosInfoValidFlags(ndr, "valid_flags", r->valid_flags);
	ndr_print_uint32(ndr, "attrib", r->attrib);
	ndr_print_uint32(ndr, "ea_size", r->ea_size);
	ndr_print_udlong(ndr, "size", r->size);
	ndr_print_udlong(ndr, "alloc_size", r->alloc_size);
	ndr_print_NTTIME(ndr, "create_time", r->create_time);
	ndr_print_NTTIME(ndr, "change_time", r->change_time);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_xattr_DosInfo(struct ndr_push *ndr, int ndr_flags, const union xattr_DosInfo *r)
{
	if (ndr_flags & NDR_SCALARS) {
		uint32_t level = ndr_push_get_switch_value(ndr, r);
		NDR_CHECK(ndr_push_union_align(ndr, 4));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, level));
		NDR_CHECK(ndr_push_union_align(ndr, 4));
		switch (level) {
			case 0xFFFF: {
				NDR_CHECK(ndr_push_xattr_DosInfoFFFFCompat(ndr, NDR_SCALARS, &r->compatinfoFFFF));
			break; }

			case 1: {
				NDR_CHECK(ndr_push_xattr_DosInfo1(ndr, NDR_SCALARS, &r->info1));
			break; }

			case 2: {
				NDR_CHECK(ndr_push_xattr_DosInfo2Old(ndr, NDR_SCALARS, &r->oldinfo2));
			break; }

			case 3: {
				NDR_CHECK(ndr_push_xattr_DosInfo3(ndr, NDR_SCALARS, &r->info3));
			break; }

			default:
				return ndr_push_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u at %s", level, __location__);
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		uint32_t level = ndr_push_get_switch_value(ndr, r);
		switch (level) {
			case 0xFFFF:
			break;

			case 1:
			break;

			case 2:
			break;

			case 3:
			break;

			default:
				return ndr_push_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u at %s", level, __location__);
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_xattr_DosInfo(struct ndr_pull *ndr, int ndr_flags, union xattr_DosInfo *r)
{
	uint32_t level;
	uint16_t _level;
	level = ndr_pull_get_switch_value(ndr, r);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_union_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &_level));
		if (_level != level) {
			return ndr_pull_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u for r at %s", _level, __location__);
		}
		NDR_CHECK(ndr_pull_union_align(ndr, 4));
		switch (level) {
			case 0xFFFF: {
				NDR_CHECK(ndr_pull_xattr_DosInfoFFFFCompat(ndr, NDR_SCALARS, &r->compatinfoFFFF));
			break; }

			case 1: {
				NDR_CHECK(ndr_pull_xattr_DosInfo1(ndr, NDR_SCALARS, &r->info1));
			break; }

			case 2: {
				NDR_CHECK(ndr_pull_xattr_DosInfo2Old(ndr, NDR_SCALARS, &r->oldinfo2));
			break; }

			case 3: {
				NDR_CHECK(ndr_pull_xattr_DosInfo3(ndr, NDR_SCALARS, &r->info3));
			break; }

			default:
				return ndr_pull_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u at %s", level, __location__);
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		switch (level) {
			case 0xFFFF:
			break;

			case 1:
			break;

			case 2:
			break;

			case 3:
			break;

			default:
				return ndr_pull_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u at %s", level, __location__);
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_xattr_DosInfo(struct ndr_print *ndr, const char *name, const union xattr_DosInfo *r)
{
	uint32_t level;
	level = ndr_print_get_switch_value(ndr, r);
	ndr_print_union(ndr, name, level, "xattr_DosInfo");
	switch (level) {
		case 0xFFFF:
			ndr_print_xattr_DosInfoFFFFCompat(ndr, "compatinfoFFFF", &r->compatinfoFFFF);
		break;

		case 1:
			ndr_print_xattr_DosInfo1(ndr, "info1", &r->info1);
		break;

		case 2:
			ndr_print_xattr_DosInfo2Old(ndr, "oldinfo2", &r->oldinfo2);
		break;

		case 3:
			ndr_print_xattr_DosInfo3(ndr, "info3", &r->info3);
		break;

		default:
			ndr_print_bad_level(ndr, name, level);
	}
}

_PUBLIC_ enum ndr_err_code ndr_push_xattr_DosAttrib(struct ndr_push *ndr, int ndr_flags, const struct xattr_DosAttrib *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->version));
		NDR_CHECK(ndr_push_set_switch_value(ndr, &r->info, r->version));
		NDR_CHECK(ndr_push_xattr_DosInfo(ndr, NDR_SCALARS, &r->info));
		NDR_CHECK(ndr_push_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_xattr_DosAttrib(struct ndr_pull *ndr, int ndr_flags, struct xattr_DosAttrib *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->version));
		NDR_CHECK(ndr_pull_set_switch_value(ndr, &r->info, r->version));
		NDR_CHECK(ndr_pull_xattr_DosInfo(ndr, NDR_SCALARS, &r->info));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_xattr_DosAttrib(struct ndr_print *ndr, const char *name, const struct xattr_DosAttrib *r)
{
	ndr_print_struct(ndr, name, "xattr_DosAttrib");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint16(ndr, "version", r->version);
	ndr_print_set_switch_value(ndr, &r->info, r->version);
	ndr_print_xattr_DosInfo(ndr, "info", &r->info);
	ndr->depth--;
}

static enum ndr_err_code ndr_push_xattr_EA(struct ndr_push *ndr, int ndr_flags, const struct xattr_EA *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->name));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_push_DATA_BLOB(ndr, NDR_SCALARS, r->value));
		NDR_CHECK(ndr_push_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_xattr_EA(struct ndr_pull *ndr, int ndr_flags, struct xattr_EA *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->name));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_pull_DATA_BLOB(ndr, NDR_SCALARS, &r->value));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_xattr_EA(struct ndr_print *ndr, const char *name, const struct xattr_EA *r)
{
	ndr_print_struct(ndr, name, "xattr_EA");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_string(ndr, "name", r->name);
	ndr_print_DATA_BLOB(ndr, "value", r->value);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_xattr_DosEAs(struct ndr_push *ndr, int ndr_flags, const struct xattr_DosEAs *r)
{
	uint32_t cntr_eas_1;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 5));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->num_eas));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->eas));
		NDR_CHECK(ndr_push_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->eas) {
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, r->num_eas));
			for (cntr_eas_1 = 0; cntr_eas_1 < r->num_eas; cntr_eas_1++) {
				NDR_CHECK(ndr_push_xattr_EA(ndr, NDR_SCALARS, &r->eas[cntr_eas_1]));
			}
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_xattr_DosEAs(struct ndr_pull *ndr, int ndr_flags, struct xattr_DosEAs *r)
{
	uint32_t _ptr_eas;
	uint32_t size_eas_1 = 0;
	uint32_t cntr_eas_1;
	TALLOC_CTX *_mem_save_eas_0;
	TALLOC_CTX *_mem_save_eas_1;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 5));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->num_eas));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_eas));
		if (_ptr_eas) {
			NDR_PULL_ALLOC(ndr, r->eas);
		} else {
			r->eas = NULL;
		}
		NDR_CHECK(ndr_pull_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->eas) {
			_mem_save_eas_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->eas, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->eas));
			size_eas_1 = ndr_get_array_size(ndr, &r->eas);
			NDR_PULL_ALLOC_N(ndr, r->eas, size_eas_1);
			_mem_save_eas_1 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->eas, 0);
			for (cntr_eas_1 = 0; cntr_eas_1 < size_eas_1; cntr_eas_1++) {
				NDR_CHECK(ndr_pull_xattr_EA(ndr, NDR_SCALARS, &r->eas[cntr_eas_1]));
			}
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_eas_1, 0);
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_eas_0, 0);
		}
		if (r->eas) {
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->eas, r->num_eas));
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_xattr_DosEAs(struct ndr_print *ndr, const char *name, const struct xattr_DosEAs *r)
{
	uint32_t cntr_eas_1;
	ndr_print_struct(ndr, name, "xattr_DosEAs");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint16(ndr, "num_eas", r->num_eas);
	ndr_print_ptr(ndr, "eas", r->eas);
	ndr->depth++;
	if (r->eas) {
		ndr->print(ndr, "%s: ARRAY(%d)", "eas", (int)r->num_eas);
		ndr->depth++;
		for (cntr_eas_1=0;cntr_eas_1<r->num_eas;cntr_eas_1++) {
			ndr_print_xattr_EA(ndr, "eas", &r->eas[cntr_eas_1]);
		}
		ndr->depth--;
	}
	ndr->depth--;
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_tdb_xattrs(struct ndr_push *ndr, int ndr_flags, const struct tdb_xattrs *r)
{
	uint32_t cntr_eas_0;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->num_eas));
		for (cntr_eas_0 = 0; cntr_eas_0 < r->num_eas; cntr_eas_0++) {
			NDR_CHECK(ndr_push_xattr_EA(ndr, NDR_SCALARS, &r->eas[cntr_eas_0]));
		}
		NDR_CHECK(ndr_push_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_tdb_xattrs(struct ndr_pull *ndr, int ndr_flags, struct tdb_xattrs *r)
{
	uint32_t size_eas_0 = 0;
	uint32_t cntr_eas_0;
	TALLOC_CTX *_mem_save_eas_0;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->num_eas));
		size_eas_0 = r->num_eas;
		NDR_PULL_ALLOC_N(ndr, r->eas, size_eas_0);
		_mem_save_eas_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->eas, 0);
		for (cntr_eas_0 = 0; cntr_eas_0 < size_eas_0; cntr_eas_0++) {
			NDR_CHECK(ndr_pull_xattr_EA(ndr, NDR_SCALARS, &r->eas[cntr_eas_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_eas_0, 0);
		NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_tdb_xattrs(struct ndr_print *ndr, const char *name, const struct tdb_xattrs *r)
{
	uint32_t cntr_eas_0;
	ndr_print_struct(ndr, name, "tdb_xattrs");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint32(ndr, "num_eas", r->num_eas);
	ndr->print(ndr, "%s: ARRAY(%d)", "eas", (int)r->num_eas);
	ndr->depth++;
	for (cntr_eas_0=0;cntr_eas_0<r->num_eas;cntr_eas_0++) {
		ndr_print_xattr_EA(ndr, "eas", &r->eas[cntr_eas_0]);
	}
	ndr->depth--;
	ndr->depth--;
}

static enum ndr_err_code ndr_push_xattr_DosStream(struct ndr_push *ndr, int ndr_flags, const struct xattr_DosStream *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->flags));
		NDR_CHECK(ndr_push_udlong(ndr, NDR_SCALARS, r->size));
		NDR_CHECK(ndr_push_udlong(ndr, NDR_SCALARS, r->alloc_size));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->name));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_push_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_xattr_DosStream(struct ndr_pull *ndr, int ndr_flags, struct xattr_DosStream *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->flags));
		NDR_CHECK(ndr_pull_udlong(ndr, NDR_SCALARS, &r->size));
		NDR_CHECK(ndr_pull_udlong(ndr, NDR_SCALARS, &r->alloc_size));
		{
			uint32_t _flags_save_string = ndr->flags;
			ndr_set_flags(&ndr->flags, LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM);
			NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->name));
			ndr->flags = _flags_save_string;
		}
		NDR_CHECK(ndr_pull_trailer_align(ndr, 4));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_xattr_DosStream(struct ndr_print *ndr, const char *name, const struct xattr_DosStream *r)
{
	ndr_print_struct(ndr, name, "xattr_DosStream");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint32(ndr, "flags", r->flags);
	ndr_print_udlong(ndr, "size", r->size);
	ndr_print_udlong(ndr, "alloc_size", r->alloc_size);
	ndr_print_string(ndr, "name", r->name);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_xattr_DosStreams(struct ndr_push *ndr, int ndr_flags, const struct xattr_DosStreams *r)
{
	uint32_t cntr_streams_1;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 5));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->num_streams));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->streams));
		NDR_CHECK(ndr_push_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->streams) {
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, r->num_streams));
			for (cntr_streams_1 = 0; cntr_streams_1 < r->num_streams; cntr_streams_1++) {
				NDR_CHECK(ndr_push_xattr_DosStream(ndr, NDR_SCALARS, &r->streams[cntr_streams_1]));
			}
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_xattr_DosStreams(struct ndr_pull *ndr, int ndr_flags, struct xattr_DosStreams *r)
{
	uint32_t _ptr_streams;
	uint32_t size_streams_1 = 0;
	uint32_t cntr_streams_1;
	TALLOC_CTX *_mem_save_streams_0;
	TALLOC_CTX *_mem_save_streams_1;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 5));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->num_streams));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_streams));
		if (_ptr_streams) {
			NDR_PULL_ALLOC(ndr, r->streams);
		} else {
			r->streams = NULL;
		}
		NDR_CHECK(ndr_pull_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->streams) {
			_mem_save_streams_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->streams, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->streams));
			size_streams_1 = ndr_get_array_size(ndr, &r->streams);
			NDR_PULL_ALLOC_N(ndr, r->streams, size_streams_1);
			_mem_save_streams_1 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->streams, 0);
			for (cntr_streams_1 = 0; cntr_streams_1 < size_streams_1; cntr_streams_1++) {
				NDR_CHECK(ndr_pull_xattr_DosStream(ndr, NDR_SCALARS, &r->streams[cntr_streams_1]));
			}
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_streams_1, 0);
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_streams_0, 0);
		}
		if (r->streams) {
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->streams, r->num_streams));
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_xattr_DosStreams(struct ndr_print *ndr, const char *name, const struct xattr_DosStreams *r)
{
	uint32_t cntr_streams_1;
	ndr_print_struct(ndr, name, "xattr_DosStreams");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint32(ndr, "num_streams", r->num_streams);
	ndr_print_ptr(ndr, "streams", r->streams);
	ndr->depth++;
	if (r->streams) {
		ndr->print(ndr, "%s: ARRAY(%d)", "streams", (int)r->num_streams);
		ndr->depth++;
		for (cntr_streams_1=0;cntr_streams_1<r->num_streams;cntr_streams_1++) {
			ndr_print_xattr_DosStream(ndr, "streams", &r->streams[cntr_streams_1]);
		}
		ndr->depth--;
	}
	ndr->depth--;
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_security_descriptor_hash_v2(struct ndr_push *ndr, int ndr_flags, const struct security_descriptor_hash_v2 *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 5));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->sd));
		NDR_CHECK(ndr_push_array_uint8(ndr, NDR_SCALARS, r->hash, 16));
		NDR_CHECK(ndr_push_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->sd) {
			NDR_CHECK(ndr_push_security_descriptor(ndr, NDR_SCALARS|NDR_BUFFERS, r->sd));
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_security_descriptor_hash_v2(struct ndr_pull *ndr, int ndr_flags, struct security_descriptor_hash_v2 *r)
{
	uint32_t _ptr_sd;
	TALLOC_CTX *_mem_save_sd_0;
	uint32_t size_hash_0 = 0;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 5));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_sd));
		if (_ptr_sd) {
			NDR_PULL_ALLOC(ndr, r->sd);
		} else {
			r->sd = NULL;
		}
		size_hash_0 = 16;
		NDR_CHECK(ndr_pull_array_uint8(ndr, NDR_SCALARS, r->hash, size_hash_0));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->sd) {
			_mem_save_sd_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->sd, 0);
			NDR_CHECK(ndr_pull_security_descriptor(ndr, NDR_SCALARS|NDR_BUFFERS, r->sd));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_sd_0, 0);
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_security_descriptor_hash_v2(struct ndr_print *ndr, const char *name, const struct security_descriptor_hash_v2 *r)
{
	ndr_print_struct(ndr, name, "security_descriptor_hash_v2");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_ptr(ndr, "sd", r->sd);
	ndr->depth++;
	if (r->sd) {
		ndr_print_security_descriptor(ndr, "sd", r->sd);
	}
	ndr->depth--;
	ndr_print_array_uint8(ndr, "hash", r->hash, 16);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_security_descriptor_hash_v3(struct ndr_push *ndr, int ndr_flags, const struct security_descriptor_hash_v3 *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 5));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->sd));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->hash_type));
		NDR_CHECK(ndr_push_array_uint8(ndr, NDR_SCALARS, r->hash, 64));
		NDR_CHECK(ndr_push_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->sd) {
			NDR_CHECK(ndr_push_security_descriptor(ndr, NDR_SCALARS|NDR_BUFFERS, r->sd));
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_security_descriptor_hash_v3(struct ndr_pull *ndr, int ndr_flags, struct security_descriptor_hash_v3 *r)
{
	uint32_t _ptr_sd;
	TALLOC_CTX *_mem_save_sd_0;
	uint32_t size_hash_0 = 0;
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 5));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_sd));
		if (_ptr_sd) {
			NDR_PULL_ALLOC(ndr, r->sd);
		} else {
			r->sd = NULL;
		}
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->hash_type));
		size_hash_0 = 64;
		NDR_CHECK(ndr_pull_array_uint8(ndr, NDR_SCALARS, r->hash, size_hash_0));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->sd) {
			_mem_save_sd_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->sd, 0);
			NDR_CHECK(ndr_pull_security_descriptor(ndr, NDR_SCALARS|NDR_BUFFERS, r->sd));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_sd_0, 0);
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_security_descriptor_hash_v3(struct ndr_print *ndr, const char *name, const struct security_descriptor_hash_v3 *r)
{
	ndr_print_struct(ndr, name, "security_descriptor_hash_v3");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_ptr(ndr, "sd", r->sd);
	ndr->depth++;
	if (r->sd) {
		ndr_print_security_descriptor(ndr, "sd", r->sd);
	}
	ndr->depth--;
	ndr_print_uint16(ndr, "hash_type", r->hash_type);
	ndr_print_array_uint8(ndr, "hash", r->hash, 64);
	ndr->depth--;
}

static enum ndr_err_code ndr_push_xattr_NTACL_Info(struct ndr_push *ndr, int ndr_flags, const union xattr_NTACL_Info *r)
{
	if (ndr_flags & NDR_SCALARS) {
		uint32_t level = ndr_push_get_switch_value(ndr, r);
		NDR_CHECK(ndr_push_union_align(ndr, 5));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, level));
		NDR_CHECK(ndr_push_union_align(ndr, 5));
		switch (level) {
			case 1: {
				NDR_CHECK(ndr_push_unique_ptr(ndr, r->sd));
			break; }

			case 2: {
				NDR_CHECK(ndr_push_unique_ptr(ndr, r->sd_hs2));
			break; }

			case 3: {
				NDR_CHECK(ndr_push_unique_ptr(ndr, r->sd_hs3));
			break; }

			default:
				return ndr_push_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u at %s", level, __location__);
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		uint32_t level = ndr_push_get_switch_value(ndr, r);
		switch (level) {
			case 1:
				if (r->sd) {
					NDR_CHECK(ndr_push_security_descriptor(ndr, NDR_SCALARS|NDR_BUFFERS, r->sd));
				}
			break;

			case 2:
				if (r->sd_hs2) {
					NDR_CHECK(ndr_push_security_descriptor_hash_v2(ndr, NDR_SCALARS|NDR_BUFFERS, r->sd_hs2));
				}
			break;

			case 3:
				if (r->sd_hs3) {
					NDR_CHECK(ndr_push_security_descriptor_hash_v3(ndr, NDR_SCALARS|NDR_BUFFERS, r->sd_hs3));
				}
			break;

			default:
				return ndr_push_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u at %s", level, __location__);
		}
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_xattr_NTACL_Info(struct ndr_pull *ndr, int ndr_flags, union xattr_NTACL_Info *r)
{
	uint32_t level;
	uint16_t _level;
	TALLOC_CTX *_mem_save_sd_0;
	uint32_t _ptr_sd;
	TALLOC_CTX *_mem_save_sd_hs2_0;
	uint32_t _ptr_sd_hs2;
	TALLOC_CTX *_mem_save_sd_hs3_0;
	uint32_t _ptr_sd_hs3;
	level = ndr_pull_get_switch_value(ndr, r);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_union_align(ndr, 5));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &_level));
		if (_level != level) {
			return ndr_pull_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u for r at %s", _level, __location__);
		}
		NDR_CHECK(ndr_pull_union_align(ndr, 5));
		switch (level) {
			case 1: {
				NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_sd));
				if (_ptr_sd) {
					NDR_PULL_ALLOC(ndr, r->sd);
				} else {
					r->sd = NULL;
				}
			break; }

			case 2: {
				NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_sd_hs2));
				if (_ptr_sd_hs2) {
					NDR_PULL_ALLOC(ndr, r->sd_hs2);
				} else {
					r->sd_hs2 = NULL;
				}
			break; }

			case 3: {
				NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_sd_hs3));
				if (_ptr_sd_hs3) {
					NDR_PULL_ALLOC(ndr, r->sd_hs3);
				} else {
					r->sd_hs3 = NULL;
				}
			break; }

			default:
				return ndr_pull_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u at %s", level, __location__);
		}
	}
	if (ndr_flags & NDR_BUFFERS) {
		switch (level) {
			case 1:
				if (r->sd) {
					_mem_save_sd_0 = NDR_PULL_GET_MEM_CTX(ndr);
					NDR_PULL_SET_MEM_CTX(ndr, r->sd, 0);
					NDR_CHECK(ndr_pull_security_descriptor(ndr, NDR_SCALARS|NDR_BUFFERS, r->sd));
					NDR_PULL_SET_MEM_CTX(ndr, _mem_save_sd_0, 0);
				}
			break;

			case 2:
				if (r->sd_hs2) {
					_mem_save_sd_hs2_0 = NDR_PULL_GET_MEM_CTX(ndr);
					NDR_PULL_SET_MEM_CTX(ndr, r->sd_hs2, 0);
					NDR_CHECK(ndr_pull_security_descriptor_hash_v2(ndr, NDR_SCALARS|NDR_BUFFERS, r->sd_hs2));
					NDR_PULL_SET_MEM_CTX(ndr, _mem_save_sd_hs2_0, 0);
				}
			break;

			case 3:
				if (r->sd_hs3) {
					_mem_save_sd_hs3_0 = NDR_PULL_GET_MEM_CTX(ndr);
					NDR_PULL_SET_MEM_CTX(ndr, r->sd_hs3, 0);
					NDR_CHECK(ndr_pull_security_descriptor_hash_v3(ndr, NDR_SCALARS|NDR_BUFFERS, r->sd_hs3));
					NDR_PULL_SET_MEM_CTX(ndr, _mem_save_sd_hs3_0, 0);
				}
			break;

			default:
				return ndr_pull_error(ndr, NDR_ERR_BAD_SWITCH, "Bad switch value %u at %s", level, __location__);
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_xattr_NTACL_Info(struct ndr_print *ndr, const char *name, const union xattr_NTACL_Info *r)
{
	uint32_t level;
	level = ndr_print_get_switch_value(ndr, r);
	ndr_print_union(ndr, name, level, "xattr_NTACL_Info");
	switch (level) {
		case 1:
			ndr_print_ptr(ndr, "sd", r->sd);
			ndr->depth++;
			if (r->sd) {
				ndr_print_security_descriptor(ndr, "sd", r->sd);
			}
			ndr->depth--;
		break;

		case 2:
			ndr_print_ptr(ndr, "sd_hs2", r->sd_hs2);
			ndr->depth++;
			if (r->sd_hs2) {
				ndr_print_security_descriptor_hash_v2(ndr, "sd_hs2", r->sd_hs2);
			}
			ndr->depth--;
		break;

		case 3:
			ndr_print_ptr(ndr, "sd_hs3", r->sd_hs3);
			ndr->depth++;
			if (r->sd_hs3) {
				ndr_print_security_descriptor_hash_v3(ndr, "sd_hs3", r->sd_hs3);
			}
			ndr->depth--;
		break;

		default:
			ndr_print_bad_level(ndr, name, level);
	}
}

_PUBLIC_ enum ndr_err_code ndr_push_xattr_NTACL(struct ndr_push *ndr, int ndr_flags, const struct xattr_NTACL *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 5));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->version));
		NDR_CHECK(ndr_push_set_switch_value(ndr, &r->info, r->version));
		NDR_CHECK(ndr_push_xattr_NTACL_Info(ndr, NDR_SCALARS, &r->info));
		NDR_CHECK(ndr_push_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		NDR_CHECK(ndr_push_xattr_NTACL_Info(ndr, NDR_BUFFERS, &r->info));
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_xattr_NTACL(struct ndr_pull *ndr, int ndr_flags, struct xattr_NTACL *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 5));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->version));
		NDR_CHECK(ndr_pull_set_switch_value(ndr, &r->info, r->version));
		NDR_CHECK(ndr_pull_xattr_NTACL_Info(ndr, NDR_SCALARS, &r->info));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		NDR_CHECK(ndr_pull_xattr_NTACL_Info(ndr, NDR_BUFFERS, &r->info));
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_xattr_NTACL(struct ndr_print *ndr, const char *name, const struct xattr_NTACL *r)
{
	ndr_print_struct(ndr, name, "xattr_NTACL");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint16(ndr, "version", r->version);
	ndr_print_set_switch_value(ndr, &r->info, r->version);
	ndr_print_xattr_NTACL_Info(ndr, "info", &r->info);
	ndr->depth--;
}

static enum ndr_err_code ndr_push_xattr_parse_DOSATTRIB(struct ndr_push *ndr, int flags, const struct xattr_parse_DOSATTRIB *r)
{
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_push_xattr_DOSATTRIB(ndr, NDR_SCALARS, &r->in.x));
	}
	if (flags & NDR_OUT) {
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_xattr_parse_DOSATTRIB(struct ndr_pull *ndr, int flags, struct xattr_parse_DOSATTRIB *r)
{
	if (flags & NDR_IN) {
		NDR_CHECK(ndr_pull_xattr_DOSATTRIB(ndr, NDR_SCALARS, &r->in.x));
	}
	if (flags & NDR_OUT) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_xattr_parse_DOSATTRIB(struct ndr_print *ndr, const char *name, int flags, const struct xattr_parse_DOSATTRIB *r)
{
	ndr_print_struct(ndr, name, "xattr_parse_DOSATTRIB");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "xattr_parse_DOSATTRIB");
		ndr->depth++;
		ndr_print_xattr_DOSATTRIB(ndr, "x", &r->in.x);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "xattr_parse_DOSATTRIB");
		ndr->depth++;
		ndr->depth--;
	}
	ndr->depth--;
}

static const struct ndr_interface_call xattr_calls[] = {
	{
		"xattr_parse_DOSATTRIB",
		sizeof(struct xattr_parse_DOSATTRIB),
		(ndr_push_flags_fn_t) ndr_push_xattr_parse_DOSATTRIB,
		(ndr_pull_flags_fn_t) ndr_pull_xattr_parse_DOSATTRIB,
		(ndr_print_function_t) ndr_print_xattr_parse_DOSATTRIB,
		{ 0, NULL },
		{ 0, NULL },
	},
	{ NULL, 0, NULL, NULL, NULL }
};

static const char * const xattr_endpoint_strings[] = {
	"ncacn_np:[\\pipe\\xattr]", 
};

static const struct ndr_interface_string_array xattr_endpoints = {
	.count	= 1,
	.names	= xattr_endpoint_strings
};

static const char * const xattr_authservice_strings[] = {
	"host", 
};

static const struct ndr_interface_string_array xattr_authservices = {
	.count	= 1,
	.names	= xattr_authservice_strings
};


const struct ndr_interface_table ndr_table_xattr = {
	.name		= "xattr",
	.syntax_id	= {
		{0x12345778,0x1234,0xabcd,{0x00,0x01},{0x00,0x00,0x00,0x02}},
		NDR_XATTR_VERSION
	},
	.helpstring	= NDR_XATTR_HELPSTRING,
	.num_calls	= 1,
	.calls		= xattr_calls,
	.endpoints	= &xattr_endpoints,
	.authservices	= &xattr_authservices
};
