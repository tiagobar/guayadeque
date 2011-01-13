// -------------------------------------------------------------------------------- //
//	Copyright (C) 2008-2010 J.Rios
//	anonbeat@gmail.com
//
//    This Program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2, or (at your option)
//    any later version.
//
//    This Program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program; see the file LICENSE.  If not, write to
//    the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
//    http://www.gnu.org/copyleft/gpl.html
//
// -------------------------------------------------------------------------------- //
#ifndef COMMANDS_H
#define COMMANDS_H

#define guEVT_USER_FIRST    10000

// -------------------------------------------------------------------------------- //
//
enum guCommandIds {
    ID_MENU_UPDATE_LIBRARY        =  guEVT_USER_FIRST,
    ID_MENU_UPDATE_LIBRARYFORCED,
    ID_MENU_LIBRARY_ADD_PATH,
    ID_MENU_UPDATE_PODCASTS,
    ID_MENU_UPDATE_COVERS,
    ID_MENU_QUIT,
    ID_MENU_PREFERENCES,
    ID_MENU_VIEW_STATUSBAR,
    ID_MENU_VIEW_FULLSCREEN,
    ID_MENU_VIEW_PLAYER_PLAYLIST,
    ID_MENU_VIEW_PLAYER_FILTERS,
    ID_MENU_VIEW_PLAYER_VUMETERS,
    ID_MENU_VIEW_PLAYER_SELECTOR,
    ID_MENU_VIEW_MAIN_LOCATIONS,
    ID_MENU_VIEW_MAIN_SHOWCOVER,
    //
    ID_MENU_VIEW_LIBRARY,
    ID_MENU_VIEW_LIB_TEXTSEARCH,
    ID_MENU_VIEW_LIB_LABELS,
    ID_MENU_VIEW_LIB_GENRES,
    ID_MENU_VIEW_LIB_ARTISTS,
    ID_MENU_VIEW_LIB_COMPOSERS,
    ID_MENU_VIEW_LIB_ALBUMARTISTS,
    ID_MENU_VIEW_LIB_ALBUMS,
    ID_MENU_VIEW_LIB_YEARS,
    ID_MENU_VIEW_LIB_RATINGS,
    ID_MENU_VIEW_LIB_PLAYCOUNT,
    ID_MENU_VIEW_LASTFM,
    ID_MENU_VIEW_RADIO,
    ID_MENU_VIEW_RAD_TEXTSEARCH,
    ID_MENU_VIEW_RAD_LABELS,
    ID_MENU_VIEW_RAD_GENRES,
    ID_MENU_VIEW_LYRICS,
    ID_MENU_VIEW_PLAYLISTS,
    ID_MENU_VIEW_PL_TEXTSEARCH,
    ID_MENU_VIEW_PODCASTS,
    ID_MENU_VIEW_POD_CHANNELS,
    ID_MENU_VIEW_POD_DETAILS,
    ID_MENU_VIEW_ALBUMBROWSER,
    ID_MENU_VIEW_FILEBROWSER,
    //
    ID_MENU_VIEW_JAMENDO,
    ID_MENU_VIEW_JAMENDO_TEXTSEARCH,
    ID_MENU_VIEW_JAMENDO_LABELS,
    ID_MENU_VIEW_JAMENDO_GENRES,
    ID_MENU_VIEW_JAMENDO_ARTISTS,
    ID_MENU_VIEW_JAMENDO_COMPOSERS,
    ID_MENU_VIEW_JAMENDO_ALBUMARTISTS,
    ID_MENU_VIEW_JAMENDO_ALBUMS,
    ID_MENU_VIEW_JAMENDO_YEARS,
    ID_MENU_VIEW_JAMENDO_RATINGS,
    ID_MENU_VIEW_JAMENDO_PLAYCOUNT,
    //
    ID_MENU_VIEW_MAGNATUNE,
    ID_MENU_VIEW_MAGNATUNE_TEXTSEARCH,
    ID_MENU_VIEW_MAGNATUNE_LABELS,
    ID_MENU_VIEW_MAGNATUNE_GENRES,
    ID_MENU_VIEW_MAGNATUNE_ARTISTS,
    ID_MENU_VIEW_MAGNATUNE_COMPOSERS,
    ID_MENU_VIEW_MAGNATUNE_ALBUMARTISTS,
    ID_MENU_VIEW_MAGNATUNE_ALBUMS,
    ID_MENU_VIEW_MAGNATUNE_YEARS,
    ID_MENU_VIEW_MAGNATUNE_RATINGS,
    ID_MENU_VIEW_MAGNATUNE_PLAYCOUNT,
    //
    ID_MENU_VIEW_IPOD,
    ID_MENU_VIEW_FBR_DETAILS,
    ID_MENU_LAYOUT_CREATE,
    ID_MENU_LAYOUT_DUMMY,
    ID_MENU_ABOUT,
    ID_MENU_HELP,
    ID_MENU_COMMUNITY,

    //
    ID_MAINFRAME_COPYTO,
    ID_MAINFRAME_COPYTODEVICE_TRACKS,
    ID_MAINFRAME_COPYTODEVICE_PLAYLIST,
    ID_MAINFRAME_REMOVEPODCASTTHREAD,
    ID_MAINFRAME_UPDATE_SELINFO,
    ID_MAINFRAME_SELECT_ALBUM,
    ID_MAINFRAME_SELECT_ALBUMNAME,
    ID_MAINFRAME_SELECT_ARTIST,
    ID_MAINFRAME_SELECT_ARTISTNAME,
    ID_MAINFRAME_SELECT_TRACK,
    ID_MAINFRAME_SELECT_YEAR,
    ID_MAINFRAME_SELECT_GENRE,
    ID_MAINFRAME_SELECT_PODCAST,
    ID_MAINFRAME_REQUEST_CURRENTTRACK,
    ID_MAINFRAME_SELECT_LOCATION,
    ID_MAINFRAME_SETFORCEGAPLESS,
    //
    ID_LIBRARY_UPDATED,
    ID_LIBRARY_DOCLEANDB,
    ID_LIBRARY_CLEANFINISHED,
    ID_LIBRARY_RELOADCONTROLS,
    //
    ID_GENRE_PLAY,
    ID_GENRE_ENQUEUE,
    ID_GENRE_ENQUEUE_ASNEXT,
    ID_GENRE_SELECTNAME,
    ID_GENRE_SETSELECTION,
    ID_GENRE_SAVETOPLAYLIST,
    //
    ID_LABEL_ADD,
    ID_LABEL_DELETE,
    ID_LABEL_EDIT,
    ID_LABEL_PLAY,
    ID_LABEL_ENQUEUE,
    ID_LABEL_ENQUEUE_ASNEXT,
    //ID_LABEL_CLEARSELECTION,
    ID_LABEL_UPDATELABELS,
    ID_LABEL_SAVETOPLAYLIST,

    //
    ID_ARTIST_PLAY,
    ID_ARTIST_ENQUEUE,
    ID_ARTIST_ENQUEUE_ASNEXT,
    ID_ARTIST_EDITLABELS,
    ID_ARTIST_EDITTRACKS,
    ID_ARTIST_SETSELECTION,
    ID_ARTIST_SELECTNAME,
    ID_ARTIST_SAVETOPLAYLIST,
    //
    ID_ALBUM_PLAY,
    ID_ALBUM_ENQUEUE,
    ID_ALBUM_ENQUEUE_ASNEXT,
    ID_ALBUM_EDITLABELS,
    ID_ALBUM_EDITTRACKS,
    ID_ALBUM_MANUALCOVER,
    ID_ALBUM_COVER_CHANGED,
    ID_ALBUM_COVER_DELETE,
    ID_ALBUM_COVER_EMBED,
    ID_ALBUM_SETSELECTION,
    ID_ALBUM_SELECTNAME,
    ID_ALBUM_SELECT_COVER,
    ID_ALBUM_SAVETOPLAYLIST,
    //
    ID_ALBUM_ORDER_NAME,
    ID_ALBUM_ORDER_YEAR,
    ID_ALBUM_ORDER_YEAR_REVERSE,
    ID_ALBUM_ORDER_ARTIST_NAME,
    ID_ALBUM_ORDER_ARTIST_YEAR,
    ID_ALBUM_ORDER_ARTIST_YEAR_REVERSE,
    //
    ID_YEAR_PLAY,
    ID_YEAR_ENQUEUE,
    ID_YEAR_ENQUEUE_ASNEXT,
    ID_YEAR_EDITTRACKS,
    ID_YEAR_SAVETOPLAYLIST,
    //
    ID_RATING_PLAY,
    ID_RATING_ENQUEUE,
    ID_RATING_ENQUEUE_ASNEXT,
    ID_RATING_EDITTRACKS,
    ID_RATING_SAVETOPLAYLIST,
    //
    ID_PLAYCOUNT_PLAY,
    ID_PLAYCOUNT_ENQUEUE,
    ID_PLAYCOUNT_ENQUEUE_ASNEXT,
    ID_PLAYCOUNT_EDITTRACKS,
    ID_PLAYCOUNT_SAVETOPLAYLIST,
    //
    ID_COMPOSER_PLAY,
    ID_COMPOSER_ENQUEUE,
    ID_COMPOSER_ENQUEUE_ASNEXT,
    ID_COMPOSER_EDITTRACKS,
    ID_COMPOSER_SAVETOPLAYLIST,
    //
    ID_ALBUMARTIST_PLAY,
    ID_ALBUMARTIST_ENQUEUE,
    ID_ALBUMARTIST_ENQUEUE_ASNEXT,
    ID_ALBUMARTIST_EDITTRACKS,
    ID_ALBUMARTIST_SETSELECTION,
    ID_ALBUMARTIST_SAVETOPLAYLIST,
    //
    ID_SONG_PLAY,
    ID_SONG_PLAYALL,
    ID_SONG_ENQUEUE,
    ID_SONG_ENQUEUE_ASNEXT,
    ID_SONG_ENQUEUEALL,
    ID_SONG_ENQUEUEALL_ASNEXT,
    ID_SONG_EDITLABELS,
    ID_SONG_EDITTRACKS,
    ID_SONG_SAVETOPLAYLIST,
    ID_SONG_DELETE_LIBRARY,
    ID_SONG_DELETE,
    ID_SONG_DELETE_DRIVE,
    ID_SONG_BROWSE_GENRE,
    ID_SONG_BROWSE_ARTIST,
    ID_SONG_BROWSE_ALBUMARTIST,
    ID_SONG_BROWSE_ALBUM,
    ID_SONG_SELECTNAME,
    ID_SONG_EDIT_COLUMN,
    ID_SONG_SET_COLUMN,
    ID_SONG_SET_RATING_0,
    ID_SONG_SET_RATING_1,
    ID_SONG_SET_RATING_2,
    ID_SONG_SET_RATING_3,
    ID_SONG_SET_RATING_4,
    ID_SONG_SET_RATING_5,
    //
    ID_PLAYER_PLAYLIST_UPDATETITLE,
    ID_PLAYER_PLAYLIST_UPDATELIST,
    ID_PLAYER_PLAYLIST_CLEAR,
    ID_PLAYER_PLAYLIST_REMOVE,
    ID_PLAYER_PLAYLIST_SAVE,
    ID_PLAYER_PLAYLIST_SMARTPLAY,
    ID_PLAYER_PLAYLIST_RANDOMPLAY,
    ID_PLAYER_PLAYLIST_REPEATPLAYLIST,
    ID_PLAYER_PLAYLIST_REPEATTRACK,
    ID_PLAYER_PLAYLIST_SMART_ADDTRACK,
    ID_PLAYER_PLAYLIST_EDITLABELS,
    ID_PLAYER_PLAYLIST_EDITTRACKS,
    ID_PLAYER_PLAYLIST_SEARCH,
    ID_PLAYER_PLAYLIST_SELECT_TITLE,
    ID_PLAYER_PLAYLIST_SELECT_ARTIST,
    ID_PLAYER_PLAYLIST_SELECT_ALBUM,
    ID_PLAYER_PLAYLIST_SELECT_GENRE,
    ID_PLAYER_PLAYLIST_SELECT_YEAR,
    ID_PLAYER_PLAYLIST_DELETE_LIBRARY,
    ID_PLAYER_PLAYLIST_DELETE_DRIVE,
    //
    ID_RADIO_PLAY,
    ID_RADIO_ENQUEUE,
    ID_RADIO_ENQUEUE_ASNEXT,
    ID_RADIO_DOUPDATE,
    ID_RADIO_UPDATED,
    ID_RADIO_UPDATE_END,
    ID_RADIO_GENRE_ADD,
    ID_RADIO_GENRE_EDIT,
    ID_RADIO_GENRE_DELETE,
    ID_RADIO_SEARCH_ADD,
    ID_RADIO_SEARCH_EDIT,
    ID_RADIO_SEARCH_DELETE,
    ID_RADIO_EDIT_LABELS,
    ID_RADIO_USER_ADD,
    ID_RADIO_USER_EDIT,
    ID_RADIO_USER_DEL,
    ID_RADIO_USER_EXPORT,
    ID_RADIO_USER_IMPORT,
    ID_RADIO_PLAYLIST_LOADED,
    //
    ID_PLAYERPANEL_PLAY,
    ID_PLAYERPANEL_STOP,
    ID_PLAYERPANEL_NEXTTRACK,
    ID_PLAYERPANEL_PREVTRACK,
    ID_PLAYERPANEL_NEXTALBUM,
    ID_PLAYERPANEL_PREVALBUM,
    ID_PLAYERPANEL_UPDATERADIOTRACK,
    ID_PLAYERPANEL_TRACKCHANGED,
    ID_PLAYERPANEL_COVERUPDATED,
    ID_PLAYERPANEL_CAPSCHANGED,
    ID_PLAYERPANEL_STATUSCHANGED,
    ID_PLAYERPANEL_TRACKLISTCHANGED,
    ID_PLAYERPANEL_PLAYMODECHANGED,
    ID_PLAYERPANEL_VOLUMECHANGED,
    ID_PLAYERPANEL_SETRATING_0,
    ID_PLAYERPANEL_SETRATING_1,
    ID_PLAYERPANEL_SETRATING_2,
    ID_PLAYERPANEL_SETRATING_3,
    ID_PLAYERPANEL_SETRATING_4,
    ID_PLAYERPANEL_SETRATING_5,
    //
    ID_AUDIOSCROBBLE_UPDATED,
    // Commands for the CoverEditor
    ID_COVEREDITOR_ADDCOVERIMAGE,
    ID_COVEREDITOR_DOWNLOADEDLINKS,
    ID_SELCOVERDIALOG_FINISH,
    // Commands for LastFM Panel
    //ID_LASTFM_UPDATE_TRACK,               // The Player notifies the panel to update the content
    ID_LASTFM_UPDATE_ARTISTINFO,            // The thread update the Artist Info
    ID_LASTFM_UPDATE_ALBUMINFO,             // The thread update the top albums
    ID_LASTFM_UPDATE_TOPTRACKS,             // The thread update the top tracks
    ID_LASTFM_UPDATE_SIMARTIST,             // The thread update the Similar artists
    ID_LASTFM_UPDATE_SIMTRACK,              // The thread update the Similar tracks
    ID_LASTFM_UPDATE_EVENTINFO,
    ID_LASTFM_PLAY,
    ID_LASTFM_ENQUEUE,
    ID_LASTFM_ENQUEUE_ASNEXT,
    ID_LASTFM_SELECT_ARTIST,
    ID_LASTFM_VISIT_URL,
    ID_LASTFM_COPYTOCLIPBOARD,
    //
    ID_STATUSBAR_GAUGE_CREATE,
    ID_STATUSBAR_GAUGE_CREATED,
    ID_STATUSBAR_GAUGE_PULSE,
    ID_STATUSBAR_GAUGE_SETMAX,
    ID_STATUSBAR_GAUGE_UPDATE,
    ID_STATUSBAR_GAUGE_REMOVE,
    //
    ID_LYRICS_UPDATE_LYRICINFO,
    ID_LYRICS_COPY,
    ID_LYRICS_PASTE,
    ID_LYRICS_PRINT,
    //
    ID_MULTIMEDIAKEYS_DBUS,
    //
    ID_PLAYLIST_PLAY,
    ID_PLAYLIST_ENQUEUE,
    ID_PLAYLIST_ENQUEUE_ASNEXT,
    ID_PLAYLIST_NEWPLAYLIST,
    ID_PLAYLIST_EDIT,
    ID_PLAYLIST_RENAME,
    ID_PLAYLIST_DELETE,
    ID_PLAYLIST_UPDATED,
    ID_PLAYLIST_IMPORT,
    ID_PLAYLIST_EXPORT,
    //
    ID_PODCASTS_CHANNEL_ADD,
    ID_PODCASTS_CHANNEL_DEL,
    ID_PODCASTS_CHANNEL_PROPERTIES,
    ID_PODCASTS_CHANNEL_UPDATE,
    ID_PODCASTS_CHANNEL_UNDELETE,
    //
    ID_PODCASTS_ITEM_DEL,
    ID_PODCASTS_ITEM_PLAY,
    ID_PODCASTS_ITEM_ENQUEUE,
    ID_PODCASTS_ITEM_ENQUEUE_ASNEXT,
    ID_PODCASTS_ITEM_DOWNLOAD,
    ID_PODCASTS_ITEM_UPDATED,
    //
    ID_ALBUMBROWSER_PLAY,
    ID_ALBUMBROWSER_ENQUEUE,
    ID_ALBUMBROWSER_ENQUEUE_ASNEXT,
    ID_ALBUMBROWSER_EDITLABELS,
    ID_ALBUMBROWSER_EDITTRACKS,
    ID_ALBUMBROWSER_SEARCHCOVER,
    ID_ALBUMBROWSER_SELECTCOVER,
    ID_ALBUMBROWSER_DELETECOVER,
    ID_ALBUMBROWSER_EMBEDCOVER,
    ID_ALBUMBROWSER_COPYTOCLIPBOARD,
    ID_ALBUMBROWSER_UPDATEDETAILS,
    ID_ALBUMBROWSER_BEGINDRAG,
    ID_ALBUMBROWSER_COVER_BEGINDRAG,
    //
    ID_FILESYSTEM_FOLDER_PLAY,
    ID_FILESYSTEM_FOLDER_ENQUEUE,
    ID_FILESYSTEM_FOLDER_ENQUEUE_ASNEXT,
    ID_FILESYSTEM_FOLDER_NEW,
    ID_FILESYSTEM_FOLDER_RENAME,
    ID_FILESYSTEM_FOLDER_DELETE,
    ID_FILESYSTEM_FOLDER_COPY,
    ID_FILESYSTEM_FOLDER_PASTE,
    ID_FILESYSTEM_FOLDER_EDITTRACKS,
    ID_FILESYSTEM_FOLDER_SAVEPLAYLIST,
    ID_FILESYSTEM_ITEMS_PLAY,
    ID_FILESYSTEM_ITEMS_ENQUEUE,
    ID_FILESYSTEM_ITEMS_ENQUEUE_ASNEXT,
    ID_FILESYSTEM_ITEMS_EDITTRACKS,
    ID_FILESYSTEM_ITEMS_RENAME,
    ID_FILESYSTEM_ITEMS_DELETE,
    ID_FILESYSTEM_ITEMS_COPY,
    ID_FILESYSTEM_ITEMS_PASTE,
    ID_FILESYSTEM_ITEMS_SAVEPLAYLIST,
    //
    ID_JAMENDO_UPDATE,  // Redownload the latest database
    ID_JAMENDO_UPGRADE, // Actualiza las canciones
    ID_JAMENDO_EDIT_GENRES,
    ID_JAMENDO_SETUP,
    ID_JAMENDO_UPDATE_FINISHED,
    ID_JAMENDO_COVER_DOWNLAODED,
    ID_JAMENDO_DOWNLOAD_TORRENT_ALBUM,
    ID_JAMENDO_DOWNLOAD_TORRENT_TRACK_ALBUM,
    ID_JAMENDO_DOWNLOAD_DIRECT_ALBUM,
    ID_JAMENDO_DOWNLOAD_DIRECT_TRACK_ALBUM,
    ID_JAMENDO_DOWNLOAD_DIRECTLY,
    //
    ID_MAGNATUNE_UPDATE,  // Redownload the latest database
    ID_MAGNATUNE_UPGRADE, // Actualiza las canciones
    ID_MAGNATUNE_EDIT_GENRES,
    ID_MAGNATUNE_SETUP,
    ID_MAGNATUNE_UPDATE_FINISHED,
    ID_MAGNATUNE_COVER_DOWNLAODED,
    ID_MAGNATUNE_DOWNLOAD_DIRECT_ALBUM,
    ID_MAGNATUNE_DOWNLOAD_DIRECT_TRACK_ALBUM,
    ID_MAGNATUNE_DOWNLOAD_DIRECTLY,
    //
    //
    ID_VOLUMEMANAGER_MOUNT_CHANGED,
    ID_VOLUMEMANAGER_MOUNT_ADDED,
    ID_VOLUMEMANAGER_MOUNT_REMOVED,
    //
    ID_PORTABLEDEVICE_UPDATE,
    ID_PORTABLEDEVICE_PROPERTIES,
    ID_PORTABLEDEVICE_UNMOUNT,
    //
    ID_CONFIG_UPDATED,
    //
    ID_ARTIST_COMMANDS = guEVT_USER_FIRST + 2000,
    ID_ALBUMARTIST_COMMANDS = guEVT_USER_FIRST + 2100,
    ID_ALBUM_COMMANDS = guEVT_USER_FIRST + 2200,
    ID_SONGS_COMMANDS = guEVT_USER_FIRST + 2300,
    ID_PLAYER_PLAYLIST_COMMANDS = guEVT_USER_FIRST + 2400,
    //
    ID_MENU_LAYOUT_LOAD = guEVT_USER_FIRST + 2500,
    ID_MENU_LAYOUT_DELETE = guEVT_USER_FIRST + 2600,
    //
    ID_FILESYSTEM_FOLDER_COMMANDS = guEVT_USER_FIRST + 2700,
    ID_FILESYSTEM_ITEMS_COMMANDS = guEVT_USER_FIRST + 2800,
    //ID_MENU_VIEW_PORTABLE_DEVICES = guEVT_USER_FIRST + 2900,
    //
    ID_LASTFM_SEARCH_LINK = guEVT_USER_FIRST + 3100,    //
    //
    ID_MENU_VIEW_PORTABLE_DEVICE = guEVT_USER_FIRST + 4000,
    //
    // This ides are reserved for possible CopyTo Patterns the first 100 and
    // the next 100 are for copy to portable device
    //
    ID_LABEL_COPYTO = guEVT_USER_FIRST + 4100,
    ID_GENRE_COPYTO = guEVT_USER_FIRST + 4300,
    ID_ARTIST_COPYTO = guEVT_USER_FIRST + 4500,
    ID_ALBUM_COPYTO = guEVT_USER_FIRST + 4700,
    ID_YEAR_COPYTO = guEVT_USER_FIRST + 4900,
    ID_RATING_COPYTO = guEVT_USER_FIRST + 5100,
    ID_PLAYCOUNT_COPYTO = guEVT_USER_FIRST + 5300,
    ID_COMPOSER_COPYTO = guEVT_USER_FIRST + 5500,
    ID_ALBUMARTIST_COPYTO = guEVT_USER_FIRST + 5700,
    ID_SONG_COPYTO = guEVT_USER_FIRST + 5900,
    ID_PLAYER_PLAYLIST_COPYTO = guEVT_USER_FIRST + 6100,
    ID_PLAYLIST_COPYTO = guEVT_USER_FIRST + 6300,
    ID_PODCASTS_CHANNEL_COPYTO = guEVT_USER_FIRST + 6500,
    ID_PODCASTS_ITEM_COPYTO = guEVT_USER_FIRST + 6700,
    ID_ALBUMBROWSER_COPYTO = guEVT_USER_FIRST + 6900,
    ID_FILESYSTEM_FOLDER_COPYTO = guEVT_USER_FIRST + 7100,
    ID_FILESYSTEM_ITEMS_COPYTO = guEVT_USER_FIRST + 7300,
    ID_PORTABLEDEVICE_COPYTO = guEVT_USER_FIRST + 7500
};

#endif
// -------------------------------------------------------------------------------- //
