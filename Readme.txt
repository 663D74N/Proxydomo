/* ===================================
�@�@�@�@�@�@�@Proxydomo�@�@�@�@�@�@�@�@�@�@�@�@
 ==================================== */
 
���͂��߂�
���̃\�t�g�̓��[�J���œ����v���N�V�t�B���^�����O�\�t�g�ł�
�쐬�ɂ�����I�[�v���\�[�X��Proximodo���g���č���Ă��܂��B

���g����
�N�����ā@127.0.0.1:6060(�v���N�V�|�[�g�ɕ\������Ă鐔�l)���v���N�V�Ƃ��Ďw�肷���
�v���N�V�t�B���^�Ƃ��ċ@�\���܂��B
�ڂ����g������Proxomitron�Ȃǂ��Q�l�ɂ��Ă��������B

$LST�̎w����@�� lists�t�H���_�ȉ��ɂ���e�L�X�g����g���q�����������̂ł�
����: lists\Kill.txt -> $LST(Kill)

�����m�̃o�O
�E�ꕔ�������Ă��Ȃ��R�}���h������܂�($ADDLSTBOX�Ȃ�)

���Ɛ�
���(�����ҁ����ώ�)�́A���̃\�t�g�ɂ���Đ������@���Ȃ鑹�Q�ɂ��A
�C����X�V���A�ӔC�𕉂�Ȃ����ƂƂ��܂��B
�g�p�ɂ������ẮA���ȐӔC�ł��肢���܂��B
 
��������Ή��L��URL�ɂ��郁�[���t�H�[���ɂ��肢���܂��B
https://ws.formzu.net/fgen/S37403840/
 
�����쌠�\��
Copyright (C) 2004 Antony BOUCHER
Copyright (C) 2013-2017 amate
 
 �摜�̈ꕔ�ɁuVS2010ImageLibrary�v�̈ꕔ���g�p���Ă��܂��B
 
���r���h�ɂ���
Visual Studio 2017 ���K�v�ł�
�r���h�ɂ� boost(1.60~)�� zlib(v1.2.8~) �� WTL(v91_5321_Final) �� ICU(v55.1~) �� wolfSSL(v3.9.6~) ���K�v�Ȃ̂ł��ꂼ��p�ӂ��Ă��������B

��boost
http://www.boost.org/

��zlib
http://zlib.net/

��ICU
http://site.icu-project.org/
���O�Ńr���h����ꍇ��
common,i18n,makedata���r���h�����
icudtXX.dll,icuinXX.dll,icuucXX.dll���ł�����ۂ��H
���O��C++ ->�R�[�h����->�����^�C�� ���C�u������ �}���`�X���b�h(/MT)�ɕύX����̂�Y�ꂸ��

��WTL
http://sourceforge.net/projects/wtl/

��wolfSSL
http://www.wolfssl.com/yaSSL/Home.html

��brotli
https://github.com/google/brotli
�\�[�X�g�ݍ��ݍς�

���R���p�C���ς�dll
zlib�̃R���p�C���ς�dll�����L��URL�Ō��J���Ă��܂�
http://1drv.ms/1vqvcaG


zlib�̃w�b�_�̏ꏊ
$(SolutionDir)zlib\x86\include
$(SolutionDir)zlib\x64\include
zlib�̃��C�u�����̏ꏊ
$(SolutionDir)zlib\x86\lib
$(SolutionDir)zlib\x64\lib
���ȉ��̏ꏊ�ɂ���΂Ƃ��ɐݒ�͂���Ȃ��͂��ł�
����ȊO�̏ꏊ��zlib��u���Ă���Ȃ�K����zlibbuffer.h/cpp���C�����Ă�������

ICU ��
$(SolutionDir)icu\Win32 or Win64 �t�H���_�� include �� lib ������΃R���p�C���ʂ�悤�ɂȂ��Ă��܂�

boost::shared_mutex���g�p����̂�boost::thread�̃��C�u�������K�v�ɂȂ�܂�
 Boost���C�u�����̃r���h���@
 https://sites.google.com/site/boostjp/howtobuild
�R�}���h���C��
// x86
b2.exe install -j 4 --prefix=lib toolset=msvc-14.1 define=BOOST_USE_WINAPI_VERSION=0x0501 runtime-link=static --with-thread --with-date_time --with-timer --with-log
// x64
b2.exe install -j 4 --prefix=lib64 toolset=msvc-14.1 define=BOOST_USE_WINAPI_VERSION=0x0501 runtime-link=static address-model=64 --with-thread --with-date_time --with-timer --with-log

��wolfssl
$(SolutionDir)wolfssl\wolfssl.vcxproj
�̃v���W�F�N�g��ǂݍ��ނ悤�ɂ��Ă���̂�
���Ƃ̓v���v���Z�b�T�̒�`�̕ύX��������΃r���h���ʂ�悤�ɂ��Ă��܂�

����ȊO�̏ꍇ
wolfssl���\�����[�V�����G�N�X�v���[���[�ɓǂݍ��܂�Ă��Ȃ��ƃr���h���ʂ�Ȃ��̂�
��x�����ăv���W�F�N�g��ǉ�����K�v������܂�

Proxydomo�̃\�����[�V�����G�N�X�v���[���[����wolfssl�̃v���W�F�N�g���폜����
�����̃v���W�F�N�g�̒ǉ��� wolfssl\wolfssl.vcxproj ��ǉ����Ă�������

wolfssl�̃v���p�e�B�y�[�W�Ńv���v���Z�b�T->�v���v���Z�b�T�̒�`�̓��e���ȉ��̓��e�ɏ���������

���v���v���Z�b�T�̒�`�̕ύX
// for Debug/Release Win32
WOLFSSL_LIB
WOLFSSL_CERT_GEN
WOLFSSL_KEY_GEN
HAVE_AESGCM
HAVE_AESCCM
HAVE_CAMELLIA
HAVE_ECC
HAVE_OCSP
HAVE_TLS_EXTENSIONS
HAVE_SESSION_TICKET
HAVE_SNI
HAVE_SECURE_RENEGOTIATION
HAVE_SUPPORTED_CURVES
HAVE_CERTIFICATE_STATUS_REQUEST_V2
WOLFSSL_RIPEMD
WOLFSSL_SHA384
WOLFSSL_SHA512
WOLFSSL_STATIC_RSA
NO_RC4
NO_HC128
NO_PSK
WOLFSSL_ALT_NAMES
MAX_CERTIFICATE_SZ=19456

// for Debug/Release x64
WOLFSSL_LIB
WOLFSSL_CERT_GEN
WOLFSSL_KEY_GEN
HAVE_AESGCM
HAVE_AESCCM
HAVE_CAMELLIA
HAVE_ECC
HAVE_OCSP
HAVE_TLS_EXTENSIONS
HAVE_SESSION_TICKET
HAVE_SNI
HAVE_SECURE_RENEGOTIATION
HAVE_SUPPORTED_CURVES
HAVE_CERTIFICATE_STATUS_REQUEST_V2
WOLFSSL_RIPEMD
WOLFSSL_SHA384
WOLFSSL_SHA512
WOLFSSL_STATIC_RSA
NO_RC4
NO_HC128
NO_PSK
WOLFSSL_ALT_NAMES
MAX_CERTIFICATE_SZ=19456

wolfssl�̃v���p�e�B�y�[�W C/C++ -> �R�[�h����
�����^�C�����C�u������ �\����Debug �Ȃ�"�}���`�X���b�h �f�o�b�O (/MTd)" �֕ύX
Release�Ȃ�"�}���`�X���b�h (/MT)" �֕ύX���Ă�������

�v���W�F�N�g�̈ˑ��֌W�̐ݒ�� �v���W�F�N�g:Proxydomo �ˑ����wolfssl �Ƀ`�F�b�N�����Ă�������
�\�����[�V�����G�N�X�v���[���[�ɂ���Proxydomo��"�Q��"�� wolfssl ��ǉ����Ă�������

����Ńr���h���ʂ�͂��ł�


v1.66�̈ȉ��̏C����wolfSSL���̃\�[�X���C������K�v������܂�
�E�T�[�o�[���瑗���Ă��郋�[�gCA�ؖ��������������Ƃ�"ASN no signer error to confirm failure"�̌x�����o��̂��C��
internal.c�� 6636�s�ڂ������

// before
WOLFSSL_MSG("Failed to verify CA from chain");

// after
WOLFSSL_MSG("Failed to verify CA from chain");

if (count > 2) {
	if (ret == ASN_NO_SIGNER_E || ret == ASN_SIG_CONFIRM_E) {
		ret = 0;	// �ŏ�ʂ̂݌�����
	}
}

v1.95�̈ȉ��̏C����wolfSSL���̃\�[�X���C������K�v������܂�
�E�T�[�o�[���瑗���Ă���ؖ����Ƀ��[�gCA���܂܂�Ă���Ɛڑ��ł��Ȃ����Ƃ�����̂��C��

asn.c�� 5455�s�ڂ������

// before
        WOLFSSL_MSG("About to verify certificate signature");

        if (ca) {
			if (cert->isCA) {

// after
        WOLFSSL_MSG("About to verify certificate signature");

        if (ca) {
        	int isRootCA = XMEMCMP(cert->subjectHash, cert->issuerHash, SIGNER_DIGEST_SIZE) == 0;
			if (cert->isCA && isRootCA == 0) {

v1.100�̈ȉ��̏C����wolfSSL���̃\�[�X���C������K�v������܂�
�E�T�[�o�[�����瑗���Ă���ؖ������傫���Ɛؒf�����̂��C�� #47
internal.c �� 7798�s�ڂ�����́@ProcessPeerCerts�֐�����

// before
    if (listSz > MAX_RECORD_SIZE)
        ERROR_OUT(BUFFER_ERROR, exit_ppc);
        
// after
    if (listSz > 19456/*MAX_RECORD_SIZE*/)
        ERROR_OUT(BUFFER_ERROR, exit_ppc);
        
�EwolfSSL version 3.12.0 ���� io.h��
#define close(s) closesocket(s)
���R�����g�A�E�g���Ă�������(�łȂ��ƃR���p�C�����ʂ�Ȃ�)
//#define close(s) closesocket(s)

WOLFSSL_AESNI
������Ɛڑ��ł��Ȃ��Ȃ�c
error = -313, revcd alert fatal error

�E�ȉ~�Ȑ��Í����T�|�[�g�����T�C�g�Ɍq����Ȃ����Ƃ�����̂��C�� ��wolfSSL���̃\�[�X���C������K�v������܂�
internal.h

before
    TLSX_SUPPORTED_GROUPS           = 0x000a, /* a.k.a. Supported Curves */
after
    TLSX_SUPPORTED_GROUPS           = 0x000a, /* a.k.a. Supported Curves */
	TLSX_EC_POINT_FORMATS			= 0x000b,	// 

tls.c

before	// int TLSX_UseSupportedCurve(TLSX** extensions, word16 name, void* heap)
        } while ((curve = curve->next));
    }
after
        } while ((curve = curve->next));
    }

	{	// TLSX_EC_POINT_FORMATS
		TLSX* extension2 = TLSX_Find(*extensions, TLSX_EC_POINT_FORMATS);
		if (!extension2) {
			byte* ec_point_formats = (byte*)XMALLOC(sizeof(word16), heap, DYNAMIC_TYPE_TLSX);
			if (ec_point_formats == NULL)
				return MEMORY_E;

			ec_point_formats[0] = 1;	// EC point formats Length
			ec_point_formats[1] = 0;	// EC point format: uncompressed (0)

			if ((ret = TLSX_Push(extensions, TLSX_EC_POINT_FORMATS, ec_point_formats, heap))
				!= 0) {
				XFREE(curve, heap, DYNAMIC_TYPE_TLSX);
				return ret;
			}
		}
	}

before // void TLSX_FreeAll(TLSX* list, void* heap)
            case TLSX_SUPPORTED_GROUPS:
                EC_FREE_ALL((EllipticCurve*)extension->data, heap);
                break;
after
            case TLSX_SUPPORTED_GROUPS:
                EC_FREE_ALL((EllipticCurve*)extension->data, heap);
                break;

			case TLSX_EC_POINT_FORMATS:
				XFREE(extension->data, heap, DYNAMIC_TYPE_TLSX);
				break;

before // static word16 TLSX_GetSize(TLSX* list, byte* semaphore, byte msgType)
            case TLSX_SUPPORTED_GROUPS:
                length += EC_GET_SIZE((EllipticCurve*)extension->data);
                break;
after
            case TLSX_SUPPORTED_GROUPS:
                length += EC_GET_SIZE((EllipticCurve*)extension->data);
                break;

			case TLSX_EC_POINT_FORMATS:
				length += 2;
				break;

before	// static word16 TLSX_Write(TLSX* list, byte* output, byte* semaphore,
            case TLSX_SUPPORTED_GROUPS:
                WOLFSSL_MSG("Elliptic Curves extension to write");
                offset += EC_WRITE((EllipticCurve*)extension->data,
                                    output + offset);
                break;
after
            case TLSX_SUPPORTED_GROUPS:
                WOLFSSL_MSG("Elliptic Curves extension to write");
                offset += EC_WRITE((EllipticCurve*)extension->data,
                                    output + offset);
                break;

			case TLSX_EC_POINT_FORMATS:
				XMEMCPY(output + offset, extension->data, 2);
				offset += 2;
				break;


// ==============================================

���J���x��
https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=D4WWS368DZKPS
