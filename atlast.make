core = 7.x
api = 2

; Kraftagen stuff
projects[kw_manifests][type] = "module"
projects[kw_manifests][download][type] = "git"
projects[kw_manifests][download][url] = "git://github.com/kraftwagen/kw-manifests.git"
projects[kw_manifests][subdir] = "kraftwagen"

projects[kw_itemnames][type] = "module"
projects[kw_itemnames][download][type] = "git"
projects[kw_itemnames][download][url] = "git://github.com/kraftwagen/kw-itemnames.git"
projects[kw_itemnames][subdir] = "kraftwagen"

; Modules
projects[admin_menu][type] = "module"
projects[admin_menu][subdir] = "contrib"

projects[context][type] = "module"
projects[context][subdir] = "contrib"

projects[date][type] = "module"
projects[date][subdir] = "contrib"

projects[devel][type] = "module"
projects[devel][subdir] = "contrib"

projects[features][type] = "module"
projects[features][subdir] = "contrib"

projects[advanced_help][type] = "module"
projects[advanced_help][subdir] = "contrib"

projects[backup_migrate][type] = "module"
projects[backup_migrate][subdir] = "contrib"

projects[diff][type] = "module"
projects[diff][subdir] = "contrib"

projects[entity][type] = "module"
projects[entity][subdir] = "contrib"

projects[pathauto][type] = "module"
projects[pathauto][subdir] = "contrib"

projects[search_krumo][type] = "module"
projects[search_krumo][subdir] = "contrib"

projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"

projects[wysiwyg][type] = "module"
projects[wysiwyg][subdir] = "contrib"

projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"

projects[views][type] = "module"
projects[views][subdir] = "contrib"

projects[leaflet][type] = "module"
projects[leaflet][subdir] = "contrib"

projects[libraries][type] = "module"
projects[libraries][subdir] = "contrib"

projects[geofield][type] = "module"
projects[geofield][subdir] = "contrib"

projects[geophp][type] = "module"
projects[geophp][subdir] = "contrib"

projects[token][type] = "module"
projects[token][subdir] = "contrib"

projects[entityreference][type] = "module"
projects[entityreference][subdir] = "contrib"

projects[views_bulk_operations][type] = "module"
projects[views_bulk_operations][subdir] = "contrib"

projects[draggableviews][type] = "module"
projects[draggableviews][subdir] = "contrib"

projects[color_field][type] = "module"
projects[color_field][subdir] = "contrib"

projects[module_filter][type] = "module"
projects[module_filter][subdir] = "contrib"

projects[safeword][type] = "module"
projects[safeword][subdir] = "contrib"

projects[ds][type] = "module"
projects[ds][subdir] = "contrib"

projects[field_group][type] = "module"
projects[field_group][subdir] = "contrib"

projects[link][type] = "module"
projects[link][subdir] = "contrib"

projects[user_revision][type] = "module"
projects[user_revision][subdir] = "contrib"

projects[jquery_update][type] = "module"
projects[jquery_update][subdir] = "contrib"

projects[leaflet_geojson_widget][type] = module
projects[leaflet_geojson_widget][download][type] = git
projects[leaflet_geojson_widget][download][branch] = "master"
projects[leaflet_geojson_widget][download][url] = "danielbeeke@git.drupal.org:sandbox/danielbeeke/1979090.git"
projects[leaflet_geojson_widget][subdir] = "sandbox"

projects[leaflet_geojson_formatter][type] = module
projects[leaflet_geojson_formatter][download][type] = git
projects[leaflet_geojson_formatter][download][branch] = "master"
projects[leaflet_geojson_formatter][download][url] =  http://git.drupal.org/sandbox/danielbeeke/1979086.git
projects[leaflet_geojson_formatter][subdir] = "sandbox"


; Themes
projects[radix][type] = "theme"

; CKEditor
libraries[ckeditor][download][type]= "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.1.1/ckeditor_4.1.1_full.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

; Colorbox
libraries[colorbox][download][type]= "get"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/master.zip"
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][destination] = "libraries"

; Leaflet
libraries[leaflet][download][type]= "get"
libraries[leaflet][download][url] = "http://leaflet-cdn.s3.amazonaws.com/build/leaflet-0.6.4.zip"
libraries[leaflet][directory_name] = "dist"
libraries[leaflet][destination] = "libraries/leaflet"

; Leaflet Draw
libraries[leaflet_draw][download][type]= "get"
libraries[leaflet_draw][download][url] = "https://github.com/Leaflet/Leaflet.draw/archive/master.zip"
libraries[leaflet_draw][directory_name] = "leaflet.draw"
libraries[leaflet_draw][destination] = "libraries"

; JSON 3
libraries[json3][download][type]= "get"
libraries[json3][download][url] = "http://cdnjs.cloudflare.com/ajax/libs/json3/3.2.4/json3.min.js"
libraries[json3][directory_name] = "json3"
libraries[json3][destination] = "libraries"

