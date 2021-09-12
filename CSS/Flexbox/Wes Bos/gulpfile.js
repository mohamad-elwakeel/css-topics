var gulp = require('gulp');
var autoprefixer = require('gulp-autoprefixer');

gulp.task('styles', async function(done){
  console.log("Started");

	gulp.src('style.css')
	  .pipe(autoprefixer())
	  .pipe(gulp.dest('build'));
	done();  
});