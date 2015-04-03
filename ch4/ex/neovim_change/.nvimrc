""Начало Внешний вид

syntax enable
set shortmess+=I
set syntax=on "Включить подсветку синтаксиса
set laststatus=2 "Всегда показывать строку состояния
set number "Нумеровать строки
set numberwidth=4 "Ширина поля нумерации строк
set showmatch "Показывать первую парную скобку после ввода второй
set guifont=Monospace\ 10 "не работает

set ruler "Всегда показывать позицию курсора

set cmdheight=2
set guicursor=a:blinkon0

colors zmrok
set guioptions=""

"Поведение
set nocompatible "Отключить режим совместимости с классическим Vi
set nobackup "Не создавать резервных копий файлов
set noswapfile "Не использовать swap-файл

set ffs=unix,dos,mac
set fencs=utf-8,cp1251,koi8-r,ucs-2,cp866

"Начало <Настройки отступов>
set expandtab "Пробелы вместо табуляции
set autoindent "Автоматические отступы
set smartindent "Умные отступы
set list "Включить подсветку табуляции и пробелов в конце строки
set listchars=tab:>.,trail:. "Установить символы которыми будет осуществляться подсветка

autocmd FileType * set tabstop=2|set shiftwidth=2
autocmd FileType python set tabstop=4|set shiftwidth=4

au BufNewFile *.py 0r ~/.vim/templ/py.skel
au BufEnter *.py set sw=4 ts=4

autocmd FileType * 
      \ match Error /\%161v.\+/

autocmd FileType python,cpp 
      \ match Error /\%81v.\+/
"Конец

"Начало <Настройки поиска>
set nohlsearch "Подсветка результатов поиска
set incsearch "Поиск фрагмента текста во время набора
"set ignorecase "Игнорировать регистр символов при поиске
"Конец

"Начало <Раскладка>
set keymap=russian-jcukenwin 
set iminsert=0 " по умолчанию - латинская раскладка
set imsearch=0 " по умолчанию - латинская раскладка при поиске

nmap <silent> <F2> :NERDTreeToggle<CR>
nmap <silent> <F5> :%!astyle -A4 -s2 <CR>
nmap <silent> <F6> :NextColorScheme<CR>
nmap <silent> <F7> :PrevColorScheme<CR>

let g:SuperTabDefaultCompletionType = "context"

"Начало <Инициализация Pathogen>
filetype off
call pathogen#helptags()
call pathogen#runtime_append_all_bundles()
filetype plugin indent on
"Конец <Инициализация Pathogen>

set statusline=%F%m%r%h%w\ [POS=%04l,%04v][%p%%]\ [LEN=%L]\ [%{&fenc}]\ [%{&enc}]

"Code completion
let g:clang_auto_select = 1
let g:clang_complete_auto = 0
let g:clang_complete_copen = 0
let g:clang_close_preview = 1
let g:clang_use_library = 1
let g:clang_library_path = '/usr/lib'
set showcmd "Отображение команд внизу экрана
let g:jedi#popup_on_dot=0
let g:jedi#show_call_signatures = 0
let g:jedi#force_py_version=3
let g:flake8_builtins="_,apply"
let g:flake8_max_line_length=80
let g:flake8_max_complexity=10

set noerrorbells visualbell t_vb=
if has('autocmd')
  autocmd GUIEnter * set visualbell t_vb=
endif
