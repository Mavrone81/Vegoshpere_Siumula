" Enable line numbers
set number

" Enable syntax highlighting
syntax enable

" Highlight search results as you type
set incsearch
set hlsearch

" Show matching parentheses/brackets
set showmatch

" Enable mouse support (for terminal Vim)
set mouse=a

" Enable auto-indentation
set smartindent
set autoindent
set tabstop=4
set shiftwidth=4

" Display line and column number in the status line
set ruler

" Highlight current line
" set cursorline

" Enable line wrapping
set wrap

" Enable line break at word boundaries
set linebreak
set showbreak=...

" Enable auto-complete suggestions as you type
set completeopt=menuone,noselect

" Enable case-insensitive searching
set ignorecase
set smartcase

" Highlight trailing whitespace
highlight ExtraWhitespace ctermbg=red guibg=red
match ExtraWhitespace /\s\+$/

" Enable persistent undo
set undofile

" Map F2 to toggle line numbers
nnoremap <F2> :set invnumber<CR>

" Map F3 to toggle paste mode
nnoremap <F3> :set paste!<CR>

" Map <leader> (by default, backslash) to a custom key for easier mappings
let mapleader="\<Space>"

" Map Ctrl+s to save file (in normal and insert mode)
nnoremap <C-s> :w<CR>
inoremap <C-s> <Esc>:w<CR>

" Map Ctrl+q to quit Vim
nnoremap <C-q> :q<CR>

" Map Ctrl+x to close the current window/tab
nnoremap <C-x> :bd<CR>

" Automatically source the vimrc file when it's saved
autocmd BufWritePost $MYVIMRC source $MYVIMRC

" Enable auto-indentation for curly braces
inoremap {<CR> {<CR>}<Esc>O

" Function to insert a dynamic 42 header
function! Insert42Header()
    let username = "sfu"
    let header = "/* ************************************************************************** */\n"
    let header .= "/*                                                                            */\n"
    let header .= "/*                                                        :::      ::::::::   */\n"
    let header .= "/*   " . expand("%:t") . "                                           :+:      :+:    :+:   */\n"
    let header .= "/*                                                    +:+ +:+         +:+     */\n"
    let header .= "/*   By: " . username . " <" . username . "     @student.42.fr>               +#+  +:+       +#+        */\n"
    let header .= "/*                                                +#+#+#+#+#+   +#+           */\n"
    let header .= "/*   Created: " . strftime("%Y/%m/%d %H:%M:%S") . " by " . username . "                #+#    #+#            */\n"
    let header .= "/*   Updated: " . strftime("%Y/%m/%d %H:%M:%S") . " by " . username . "               ###   ########         */\n"
    let header .= "/*                                                                            */\n"
    let header .= "/* ************************************************************************** */\n"

    " Move to the top of the file and insert the header
    execute "normal! ggO" . header

    " Move the cursor to the line below the header
    normal! j
endfunction

" Map F1 to insert a dynamic 42 header
noremap <F1> :call Insert42Header()<CR>
