# Proxydomo�@�@�@�@�@�@�@�@�@�@�@�@
 
## ���͂��߂�
���̃\�t�g�̓��[�J���œ����v���N�V�t�B���^�����O�\�t�g�ł�  
�쐬�ɂ�����I�[�v���\�[�X��Proximodo���g���č���Ă��܂��B  

## �������
�EWindows10 home 64bit �o�[�W���� 20H2  
��v2.0 ����� 64bit�łł������삵�܂���

���O�ɁAvc_redist.x64.exe �̃C���X�g�[�����K�v�ɂȂ邩������܂���

## ���g����
�N�����ā@127.0.0.1:6060(�v���N�V�|�[�g�ɕ\������Ă鐔�l)���v���N�V�Ƃ��Ďw�肷���
�v���N�V�t�B���^�Ƃ��ċ@�\���܂��B  
�ڂ����g������Proxomitron�Ȃǂ��Q�l�ɂ��Ă��������B  

$LST�̎w����@�� lists�t�H���_�ȉ��ɂ���e�L�X�g����g���q�����������̂ł�  
����: lists\Kill.txt -> $LST(Kill)

## �����m�̃o�O
�E�ꕔ�������Ă��Ȃ��R�}���h������܂�($ADDLSTBOX�Ȃ�)

## ���Ɛ�
���(�����ҁ����ώ�)�́A���̃\�t�g�ɂ���Đ������@���Ȃ鑹�Q�ɂ��A  
�C����X�V���A�ӔC�𕉂�Ȃ����ƂƂ��܂��B  
�g�p�ɂ������ẮA���ȐӔC�ł��肢���܂��B  
 
��������Ή��L��URL�ɂ��郁�[���t�H�[���ɂ��肢���܂��B  
https://ws.formzu.net/fgen/S37403840/
 
## �����쌠�\��
Copyright (C) 2004 Antony BOUCHER  
Copyright (C) 2013-2021 amate
 
�摜�̈ꕔ�ɁuVS2010ImageLibrary�v�̈ꕔ���g�p���Ă��܂��B
 
## ���r���h�ɂ���
Visual Studio 2019 ���K�v�ł�
�r���h�ɂ� boost(1.60~)�� zlib(v1.2.8~) �� WTL(v91_5321_Final) �� ICU(v55.1~) �� OpenSSL(v3.0.0~) ���K�v�Ȃ̂ł��ꂼ��p�ӂ��Ă��������B

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

��OpenSSL  
https://www.openssl.org/

��brotli  
https://github.com/google/brotli
�\�[�X�g�ݍ��ݍς�

���R���p�C���ς�dll  
zlib�̃R���p�C���ς�dll�����L��URL�Ō��J���Ă��܂�  
http://1drv.ms/1vqvcaG


zlib�̃w�b�_�̏ꏊ  
\$(SolutionDir)zlib\x86\include  
\$(SolutionDir)zlib\x64\include  
zlib�̃��C�u�����̏ꏊ  
\$(SolutionDir)zlib\x86\lib  
\$(SolutionDir)zlib\x64\lib  
���ȉ��̏ꏊ�ɂ���΂Ƃ��ɐݒ�͂���Ȃ��͂��ł�  
����ȊO�̏ꏊ��zlib��u���Ă���Ȃ�K����zlibbuffer.h/cpp���C�����Ă�������  

ICU ��  
$(SolutionDir)icu\Win32 or Win64 �t�H���_�� include �� lib ������΃R���p�C���ʂ�悤�ɂȂ��Ă��܂�

boost::shared_mutex���g�p����̂�boost::thread�̃��C�u�������K�v�ɂȂ�܂�
 Boost���C�u�����̃r���h���@  
 https://sites.google.com/site/boostjp/howtobuild
�R�}���h���C��  
// x86  
b2.exe install --prefix=lib toolset=msvc-14.2 runtime-link=static --with-thread --with-date_time --with-timer --with-log  

// x64  
b2.exe install  --prefix=lib64 toolset=msvc-14.2 runtime-link=static address-model=64 --with-thread --with-date_time --with-timer --with-log

## ���X�V����

<pre>

v2.0
�E[change] SSL/TLS���C�u������ wolfSSL ���� OpenSSL �֕ύX
�E[change] CA�ؖ����̐����ł͕K��ECC�Í��𗘗p����悤�ɂ���

</pre>


